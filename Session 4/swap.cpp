#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << "Hello multiverse" << endl;
    int a = 4;
    int b = 8;
    swap(&a,&b);
    cout << a << endl;
    cout << b << endl;
}