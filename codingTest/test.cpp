#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {

    string id_2 = ".";
    
    if (!id_2.empty()) {
        if (id_2.front() == '.') id_2.erase(0, 1);
    }
    if (!id_2.empty()) {
        if (id_2.back() == '.') id_2.erase(id_2.length() - 1, 1);
    }
   
    

    


    

    cout << id_2;

    
}