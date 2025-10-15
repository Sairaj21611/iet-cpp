#include <iostream>  
#include <conio.h>  
using namespace std;   
class A  
{  
    public:   
    void show()  
    {  
        cout << " It is the member function of class A " << endl;  
    }  
 };   
 class B  
{  
    public:   
    void show()  
    {  
        cout << " It is the member function of class B " << endl;  
    }  
 };  
 class child: public A, public B  
 {  
    public:  
        void disp()  
        {  
            cout << " It is the member function of the child class " << endl;  
         }  
 };  
 int main ()  
 {  
    
    child ch;  
    ch.A::show(); // It causes ambiguity   //To access, write class name and scope resolution operator and then member function
ch.disp();  
    return 0;  
 }  


