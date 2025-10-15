#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

int main() 
{
    cout<<add(4,5)<<endl;
    int result2 = add(5, 10, 15);
    cout<<add(5,4,3)<<endl;
    return 0;
}