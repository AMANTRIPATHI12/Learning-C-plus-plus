#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Hello multiverse" << endl;
    int arr1[2][3] = {
        {1,2,3,},
        {4,5,6}
    };

    int arr2[2][3] = {
        {7,8,9},
        {10,11,12}
    };

    int arr3[2][3];
    int row = sizeof(arr1) / sizeof(arr1[0]);
    int col = sizeof(arr1[0]) / sizeof(arr1[0][0]);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Array 1" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array 2" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array 3" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

}