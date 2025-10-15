#include<iostream>
using namespace std;
#define MAXIMUM(a, b) (a > b) ? a : b //macro is define 
int main() 
{ 
    cout << "Max (100, 1000):"; 
    int k = MAXIMUM(100, 1000); 
    cout << k << endl; 
    cout << "Max (20, 0):"; 
    char k1 = MAXIMUM('A', 'B'); 
    cout << k1; 
    return 0; 
} 