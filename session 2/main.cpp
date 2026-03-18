#include <iostream>
using namespace std;

bool isEven(int num){
    return (num%2 == 0);
}


int main() {
    cout << "Hello multiverse" << endl;
    int num;
    cout << "Enter a number to check if its even or not : ";
    cin >> num;
    bool result = isEven(num);
    if(result){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}