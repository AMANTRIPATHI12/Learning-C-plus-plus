#include <iostream>
using namespace std;

int main() {
    double sales = 95000;
    const double state_tax_rate = 0.04;
    double state_tax = state_tax_rate*sales;

    const double county_tax_rate = 0.02;
    double county_tax = county_tax_rate*sales;

    double totaltax = state_tax + county_tax;

    cout << "Total sales : " << sales << endl 
        << "State tax : " << state_tax << endl 
        << "County tax : " << county_tax << endl
        << "Total tax : " << totaltax << endl;
        
    return 0;
}