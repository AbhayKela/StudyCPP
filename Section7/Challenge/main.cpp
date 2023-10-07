#include<iostream>
#include <vector>

using namespace std;

int main() {
    cout << endl;
    
    vector<int>vector1;
    vector1.push_back (10);
    vector1.push_back (20);
    cout<< "First element in vector1: " << vector1.at(0) << endl;
    cout<< "Second element in vector1: " << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;
    
    vector<int>vector2;
    vector2.push_back (100);
    vector2.push_back (200);
    cout<< "\n\nFirst element in vector1: " << vector1.at(0) << endl;
    cout<< "Second element in vector1: " << vector1.at(1) << endl;
    cout << "Size of vector2: " << vector1.size() << endl;
    
    vector<vector<int>>vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\n\nSize of vector2_2d: " << vector_2d.size() << endl;
    
   cout<< vector_2d.at(0).at(0) << "   " << vector_2d.at(0).at(1)<< endl;
   cout<< vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1)<< endl;
    
    vector1[0] = 1000;
    
   cout<< vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1)<< endl;
   cout<< vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1)<< endl;
    
    return 0;
}