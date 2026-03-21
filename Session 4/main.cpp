#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
    cout << "Hello multiverse" << endl;
    int x = 10;
    int* p = &x;    // p stores address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of p (address it holds): " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;

    *p = 20;        // change x through pointer
    cout << "New value of x: " << x << endl;
}