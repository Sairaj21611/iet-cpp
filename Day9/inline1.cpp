#include <iostream>
using namespace std;

// Normal function
/*int add(int a, int b) 
{
    return a + b;
}*/

// Inline function
inline int addInline(int a, int b) 
{
    return a + b;
}

int main() 
{
   
    //cout << "result: " << add(a, b) << endl;
    cout << "result: " << addInline(10, 2) << endl;
     cout << "result: " << addInline(10, 4) << endl; //preventing over calling of function
}


