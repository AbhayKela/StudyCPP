#include<iostream>
#include <vector>

using namespace std;

int main() {
    cout << endl;
    
    vector <char> vowels {'a', 'e', 'i', 'o','u'};
    vector <int> test_scores {100, 98, 89, 85, 93};
    
    // vector<int>test_scores (3) // 3 elements all initialized to zero
    // vector<int>test_scores (3,100) // 3 elements all initialized to zero
    
    
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << endl;
    cout << "First score at index 0: " << test_scores.at(0) << endl;
    cout << "Second score at index 1: " <<test_scores.at(1) << endl;
    cout << "Third score at index 2: " << test_scores.at(2)<< endl;
    cout << "Fourth score at index 3: " << test_scores.at(3)<< endl;
    cout << "Fifth score at index 4: " << test_scores.at(4)<< endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    cout << endl;
    
    test_scores.push_back(80);
    test_scores.push_back(90);
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
    
    
    vector <double> hi_temperature (365, 80.0);
    
    return 0;
}