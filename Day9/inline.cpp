#include <iostream>
using namespace std;
inline int cube(int c) 
{ return c * c * c; }
int main()
{
    int c;
    cout<<"Enter a number = ";
    cin>>c;
    cout << "The cube is: " << cube(c) << "\n";
}

