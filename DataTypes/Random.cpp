// Creating a program to generate a random number.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Hello multiverse"<<endl;

    long elasped_sec = time(nullptr); // it returns the current time elasped from Jan 1 1970
    srand(elasped_sec); // srand function seeds the rand() function with elasped sec to generate a random number everytime.
    int number = rand() % 7;
    cout << number;
    return 0;
}