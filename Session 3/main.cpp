#include <iostream>

using namespace std;

int main() {
    cout << "Hello multiverse" << endl;
    int arr[5];
    int sum = 0;
    double Average;
    cout << "Enter 5 numbers for the array" << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    Average = sum/5.0;

    cout << "sum of numbers : " << sum << endl;
    cout << "Average of numbers : " << Average << endl;

}