#include<iostream>
using namespace std;

int main() {
   
 //   int total_amount {100};
//    int total_number {8};
//    
//    cout<< "Average without static cast: " <<  total_amount/ total_number << endl;
//    
//    cout << "Average with static cast (converting variable type): " << static_cast<double> (total_amount) / total_number<< endl;

    int total{0};
    int num1{0}, num2{0},num3{0};
    const int count {3};
    
    cout << "Enter three integers separated by spaces: " << endl;
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    average = total/count;
    
    cout << "The three numbers were: " << num1 << "," << num2 << "," << num3 << "," << endl; 
    cout << "The sum of three number is: " << total << endl;
    cout << "The average of three number is: " << average << endl;
    
    cout << "The average of three number (converting variable type): " << static_cast<double> (total)/count << endl;

    return 0;
}