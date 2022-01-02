#include <iostream>
using namespace std;

void root(char key);
void set_left(char key, int parentID);
void set_right(char key, int parentID);
void print_tree();

char tree[50000];

int main()
{
    root('A');

    set_left('B', 0);

    set_left('C', 0);

    set_right('C', 0);

    set_left('D', 1);

    set_right('E', 3);
    print_tree();

	return 0;
}




void root(char key) {

    tree[0] = key;
    cout << key << " is at the root" << endl;
  
}

void set_left(char key, int parentID) {
    int idx = parentID * 2 + 1;
    if (*(tree + idx) == 0)
    {
        tree[idx] = key;
        cout << key << " is appended at the left of " << tree[parentID] << endl;
    }
    else
    {
        cout << tree[parentID] << " has already the left child. " << endl;
    }
    
}

void set_right(char key, int parentID) {
    int idx = parentID * 2 + 2;
    if (*(tree + idx) == 0)
    {
        tree[idx] = key;
        cout << key << " is appended at the right of " << tree[parentID] << endl;
    }
    else
    {
        cout << tree[parentID] << " has already the right child. " << endl;
    }
}

void print_tree() {

    // char 트리구조를 시각화하긴 힘들어서 간단하게 New Line으로 레벨을 구분했습니다.
    for (int i = 0; i < sizeof(tree); i = i*2 + 1) {
        for (int j = i/2; j < i; j++)
        {
            if (*(tree + j) != 0) {
                cout << tree[j] << "[" << j << "]" << " ";
            }
            else { cout << " "; }

            
        }
        cout << "\n";
    }
    

}

