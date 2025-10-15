#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"In class A contructor "<<endl;
        }
};
class B{
    public:\
        B(){
            cout<<"In class B constructor"<<endl;
        }
};
class C : public B, public A{
    public:
        C(){
            cout<<"In class C constructor"<<endl;
        }
};
int main(){
    C c1;
    return 0;
}