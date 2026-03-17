#include <iostream>
#include <string>
using namespace std;

int main() {
    int total_cups;
    string fav_tea;
    cout << "Enter your fav tea : ";
    getline(cin , fav_tea);

    cout << "How many cups do you want : ";
    cin >> total_cups;

    cout << "Here is your " << total_cups << " cup " << fav_tea;

    return 0;
}