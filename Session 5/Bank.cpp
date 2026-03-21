#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount (string accNum, double bal){
            accountNumber = accNum;
            balance = bal;
        }
        // Getters
        string getAccountNumber()const{
            return accountNumber;
        }

        double getBalance()const{
            return balance;
        }

        void deposit(double amount){
            if(amount > 0){
                balance += amount;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
            }
        }

        // display
        void display()const{
            cout << "Balance: " << balance << endl;
        }
};

int main(){
    cout << "Hello multiverse" << endl;
    BankAccount b1("420",500);
    BankAccount b2("67",1000);
    BankAccount b3("41",2000);

    b1.deposit(500);
    b1.display();
    b2.withdraw(500);
    b2.display();
}