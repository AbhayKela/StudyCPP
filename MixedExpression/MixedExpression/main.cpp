#include<iostream>

int main() {
    
    int total {0};
    int num1{0}, num2{0},num3 {0};
    const int count{3};
    
    cout << "Enter 3 intergerst separated by spaces: " << endl;
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    averag = total/count;
    cout << " The 3 numbers were: " << num1 " ," << num2 << " and " << num3;
    cout << "The sum of the numbers is : " << endl;
    cout << "Average of the numbers is : " << endl;
    
    
    
    cout << endl;
    

    return 0;
}