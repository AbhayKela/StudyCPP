#include<iostream>

using namespace std;

int main() {
    
    cout << "\nThis program converts miles to kms and kms to miles" << endl;
    
    const double miles_to_km {1.60934}; 
    cout << "Enter distance in mile: " << endl;
    
    double dist1{0};
    cin >> dist1;
    cout << dist1 << " miles convert in kms " << miles_to_km*dist1 << endl;
    
    const double kms_to_miles {0.62137};
    cout << "Enter distance in kms: " << endl;
    
    double dist2 {0};
    cin >> dist2;
    cout << dist2 << " kms converted to miles " << kms_to_miles*dist2 << endl;
    
   
    return 0;
}