#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Hello multiverse" << endl;

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int* arr = new int[size];
    
    int sum = 0;
    cout << "Enter values of array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of array : " << sum;
    delete[] arr;
    arr = nullptr;
}