// 1. Free the memory when the time is up!
#include <iostream>
#include <Windows.h>
#include <thread>

using namespace std;



template <typename T> class timer_smartptr

{

private:
    T* ptr;
    thread t;

public:
    // thread funtion
    void timer(int time) {
        Sleep(1000 * time);
        delete ptr;
    }

    timer_smartptr(T* p = 0, int time = 10) : ptr(p) {
        // set the thread
        t = thread(&timer_smartptr::timer, this, time);
    }

    ~timer_smartptr() {
        cout << "Delete!";
    }



    T& operator*() { return *ptr; }
    T* operator->() { return ptr; }

    void join() {
        t.join();
    }

    void print() {
        cout << *ptr << endl;
    }

};



int main() {

    cout << "Start Thread" << endl;
    timer_smartptr<int> p1(new int(10), 10); // e.g., 10s
    p1.print(); // 10 출력
    p1.join(); // wait till the time is up! 
    cout << "Finish Thread" << endl;
    p1.print(); // 메모리 해제하였기에 쓰레기값 출력
    cout << "Wow!" << endl;

}