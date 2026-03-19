#include <iostream>

using namespace std;

int max(const int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    cout << "Hello multiverse" << endl;
    int arr[5];

    cout << "Enter 5 numbers for the array" << endl;
    for(int i = 1; i < 5; i++){
        cin >> arr[i];
    }

    int size = sizeof(arr)/ sizeof(arr[0]);

    int result = max(arr , size);
    cout << "maximum in array is : " << result << endl;

}