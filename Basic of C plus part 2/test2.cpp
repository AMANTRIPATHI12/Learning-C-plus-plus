#include <iostream>
using namespace std;

int main() {
    // fahrenheit to celsius
    double fahrenheit;
    cout << "Enter temprature in fahrenheit : ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * (5.0/9);
    cout << "The temperature in celsius is : " << celsius;
    return 0;
}