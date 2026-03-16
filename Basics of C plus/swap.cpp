#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    cout << b;
    const double PI = 3.14;
    return 0;
}