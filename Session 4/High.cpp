#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int findMax(const int* arr, int size){
    int max = *arr;
    for(int i = 0; i < size; i++){
        if(*(arr+i) > max){
            max = *(arr+i);
        }
    }
    return max;
}

int main() {
    cout << "Hello multiverse" << endl;
    int arr[] = {50,20,30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    cout << "Maximum element in the array = " << max;
}