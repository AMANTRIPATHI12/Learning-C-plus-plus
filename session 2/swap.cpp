#include <iostream>
using namespace std;

void swaping(int &num1 , int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    cout << "Hello multiverse" << endl;
    int num1 = 4;
    int num2 = 8;
    cout << "Before Swap num 1 : " << num1 << endl;
    cout << "Before Swap num 2 : " << num2 << endl;

    swaping(num1 , num2);
    
    cout << "After Swap num 1 : " << num1 <<  endl;
    cout << "After Swap num 2 : " << num2 <<  endl;

}