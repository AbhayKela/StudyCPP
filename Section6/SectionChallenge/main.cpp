#include<iostream>

using namespace std;

int main() {
    cout << endl;
    cout << "Hello, welcome to Frank's Carpet cleaning services" << endl;
    
    int number_of_small_rooms {0};
    cout << "How many small rooms would you like cleaned? " <<endl;
    cin >> number_of_small_rooms;
    
    int number_of_large_rooms {0};
    cout << "How many large rooms would you like cleaned? " <<endl;
    cin >> number_of_large_rooms;
    
    const double price_per_smallroom {25};
    const double price_per_largeroom {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms " << number_of_small_rooms << " & number of large rooms " << number_of_large_rooms << endl;
    cout << "Price per small rooms " << price_per_smallroom << " & price of large rooms " << price_per_largeroom << endl;
    cout << "Cost: $" << ( price_per_largeroom*number_of_large_rooms)+(price_per_smallroom*number_of_small_rooms)<< endl;
    

    
    cout << "Tax: $" <<((price_per_largeroom*number_of_large_rooms)+(price_per_smallroom*number_of_small_rooms))*sales_tax<< endl;
    
    cout << "==========================================" <<  endl;
    
    cout << "Total estimate: $" << ( price_per_largeroom*number_of_large_rooms)+(price_per_smallroom*number_of_small_rooms)+
                                                    ((price_per_largeroom*number_of_large_rooms)+(price_per_smallroom*number_of_small_rooms))*sales_tax<< endl;
    cout << "The estimate is valid for " << estimate_expiry << " days" << endl;
    cout << endl;
    
    
    return 0;
    
    
}