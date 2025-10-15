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
    }
    ~test()
    {
        cout<<"destructor is called\n"<<endl;
    }

};
int main()
{
    test t1,t2;
    t1.~test();//explicitly destructor is called
    t2.~test();//
}