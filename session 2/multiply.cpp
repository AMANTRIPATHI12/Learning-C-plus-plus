#include <iostream>
using namespace std;

int multiply(int num1 , int num2){
    return num1*num2;
}

double multiply(double num1 , double num2){
    return num1*num2;
}

int main() {
    cout << "Hello multiverse" << endl;
    int res1 = multiply(4,5);
    cout << "Result 1 : " << res1 << endl;
    double res2 = multiply(4.1,5.1);
    cout << "Result 2 : "<< res2 << endl;
}