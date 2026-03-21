#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
    cout << "Hello multiverse" << endl;
    int x = 50;
    int* p = &x;
    cout << *p << endl;
    *p = 100;
    cout << x << endl;
}