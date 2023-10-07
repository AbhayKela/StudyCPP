#include<iostream>

using namespace std;

int main() {
    cout << endl;
    
    int test_score [5] {100, 95, 99, 87, 88};
    cout << "Declared array : test_score [5] {100, 95, 99, 87, 88}" << endl;
    cout << "First score at index 0: " << test_score [0] << endl;
    cout << "First score at index 1: " << test_score [1] << endl;
    cout << "First score at index 2: " << test_score [2] << endl;
    cout << "First score at index 3: " << test_score [3] << endl;
    cout << "First score at index 4: " << test_score [4] << endl;
    
    cout << "Provide any value for element at index 0 in array 'test_score'" << endl;
    cin >> test_score[0];
    cout << "First score at index 0: " << test_score [0] << endl;
    cout << "First score at index 1: " << test_score [1] << endl;
    cout << "First score at index 2: " << test_score [2] << endl;
    cout << "First score at index 3: " << test_score [3] << endl;
    cout << "First score at index 4: " << test_score [4] << endl;

    return 0;
}