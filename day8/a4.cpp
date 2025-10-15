#include<iostream>
#include<string.h>
using namespace std;
int count=1;
class test
{
    
    public : 
    test()
    { 
        cout<<"constructor is called\n";
        cout<<count++<<endl;
    }
    ~test()
    {
        cout<<"destructor is called\n";
        cout<<count--<<endl;
    }

};
int main()
{
    test t1;
    test t2;
    test t3;
}