#include<iostream>

using namespace std;

int main() {
    
    const double usd_per_eur {1.19};
    cout << "\nWelcome to the EUR to USD converter " << endl;
    cout << "Enter the value in EUR" << endl;
    
    double euros {0.0};
    cin >> euros;
    
    double dollars {0.0};
    dollars = euros * usd_per_eur;
    
    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;


    return 0;
}