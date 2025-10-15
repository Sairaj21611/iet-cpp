#include<iostream>
using namespace std;
class Parent
{
    public: 
        int id_p;
};
class Child: public Parent
{
    public:
        int id_c;
};
int main(){
    Child c1; 
    c1.id_p = 500;
    c1.id_c = 100;
    cout<<"value of id_p:"<<c1.id_p<<"\n";
    cout<<"value of id_c:"<<c1.id_c<<"\n";
    cout<<sizeof(c1);
}
