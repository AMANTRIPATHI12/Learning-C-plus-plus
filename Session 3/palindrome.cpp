#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool isPalindrome(const char str[], int size){
    int left = 0;
    int right = size - 2;

    while(left <= right){
        if(str[left]!=str[right]){
            return false;

        }

        left ++;
        right --;
    }

    return true;
}

int main() {
    cout << "Hello multiverse" << endl;
    
    const char str[] = "racecar";
    int size = sizeof(str);
    bool result = isPalindrome(str , size);
    if(result){
        cout << "True";
    }
    else{
        cout << "False";
    }
}