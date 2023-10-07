#include<iostream>

using namespace std;

int main() {
    cout << endl;
    const int row {3};
    const int col {4};

    double  matrix [row][col] {
        {1.0,2,3,4},
        {1.0,2,3.2,4},
        {5,1,7,9.8}};
    cout << matrix[0][0] << endl;
    cout << matrix[0][1] << endl;
    cout << matrix[0][2] << endl;
    cout << matrix[0][3] << endl;
    cout << matrix[1][0] << endl;
    cout << matrix[1][1] << endl;
    cout << matrix[1][2] << endl;
    cout << matrix[1][3] << endl;
    cout << matrix[2][0] << endl;
    cout << matrix[2][1] << endl;
    cout << matrix[2][2] << endl;
    cout << matrix[2][3] << endl;
    
    return 0;
}