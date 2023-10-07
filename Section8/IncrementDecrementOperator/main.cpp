#include<iostream>
using namespace std;


int main() {
    
    int counter {10}; // Operand
    int result {0};
    
    cout << "\nExample1: Simple increament" << endl;
    cout << "Counter  : "<< counter << endl;
    
    counter = counter + 1;
    cout << "Counter+1: "<< counter << endl;
    
    counter++;
    cout << "Counter++: "<< counter << endl;
    
    ++counter;
    cout << "++Counter: "<< counter << endl;
    //------------------------------------------ //

    // Example2: preincrement
    
    cout << "\nExample2: pre increament" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter; // Note the pre increment 
    // As effect of the above statement counter is incremented first and the value of counter changes
    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    //------------------------------------------ //
    
    // Example3: postincrement
    
    cout << "\nExample3: post increament" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++; // Note the post increment 
    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    //------------------------------------------ //
    
    // Example4: 
    
    cout << "\nExample4: pre increament +10 " << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter+10; // Note the post increment 
    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    //------------------------------------------ //

    // Example5: 
    
    counter = 10;
    result = 0;
    
    cout << "\nExample4: post increament +10 " << endl;
    cout << "Counter: " << counter << endl;
    
    result = counter++ +10; // Note the post increment 
    cout << "Counter: " << counter << endl;
    cout << "Result : " << result << endl;
    
    return 0;
}