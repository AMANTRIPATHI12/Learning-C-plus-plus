#include <iostream>

using namespace std;

void reverse(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while (left < right){
        swap(arr[left],arr[right]);
        left ++;
        right --;
    }
}

int main() {
    cout << "Hello multiverse" << endl;
    int arr[5];
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout << "Enter 5 numbers for the array" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    cout << "Before swap" << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    reverse(arr , size);
    
    cout << "After swap" << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

}