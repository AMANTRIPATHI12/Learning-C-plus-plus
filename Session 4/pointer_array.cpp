#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void doubleValues(int* arr, int size){
    for(int i = 0; i < size; i++){
        *arr *= 2;
        arr++;
    }
}

int main() {
    cout << "Hello multiverse" << endl;
    int arr[5];
    cout << "Enter 5 elements to store in array to double it " << endl;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    doubleValues(arr , size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}