#include<iostream>
using namespace std;
class demo
{
    int* ptr;
    public:
    demo()
    {
        ptr=new int;
        *ptr=20;

    }
    void display()
    {
        cout<<*ptr<<endl;
        cout<<ptr<<endl;
        cout<<&ptr<<endl;
    }
};
    int main()
    {
        demo obj1;
        obj1.display();
    }
    
    
