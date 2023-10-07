#include<iostream>

using namespace std;

int main() {
    cout << endl;
    
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    // cin >> vowels[5]; This is out of bound and may crash the program
    
    double hi_temp[] {98.1, 100.2,87.55, 81.6};
    cout << "The first high temperature is: " << hi_temp[0]<< endl;
    
    hi_temp[0] = 200.5;
    cout << "The first high temperature is updated to: " << hi_temp[0] << endl;
    
    
    int test_score[5] {88,65,44,99,89};
    cout << "First score at index 0: " << test_score[0]<< endl;
    cout << "Secong score at index 1: " << test_score[1]<< endl;
    cout << "Third score at index 2: " << test_score[2]<< endl;
    cout << "Fourth score at index 3: " << test_score[3]<< endl;
    cout << "Fifth score at index 4: " << test_score[4]<< endl;
    cout << endl;
    
    cout << "Enter test scores: "<< endl;
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];
    
    cout << "First score at index 0: " << test_score[0]<< endl;
    cout << "Secong score at index 1: " << test_score[1]<< endl;
    cout << "Third score at index 2: " << test_score[2]<< endl;
    cout << "Fourth score at index 3: " << test_score[3]<< endl;
    cout << "Fifth score at index 4: " << test_score[4]<< endl;
    
    
    
    return 0;
}