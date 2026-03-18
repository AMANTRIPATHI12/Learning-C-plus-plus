#include <iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2; i * i <= num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Hello multiverse" << endl;
    int num;
    cout << "Enter a number to check prime : ";
    cin >> num;

    if(num < 2){
        cout << "Enter number greater than or equal to 2";
    }
    else{
        bool result = isPrime(num);
        if(result){
            cout << num << " is Prime";
        }
        else{
            cout << num << " is not Prime";
        }
    }
}