#include<iostream>
using namespace std;
class Parent{
    protected:
        int id_protected;
};
class Child: public Parent 
{
    public:
        void setId(int id){
            id_protected=id;
        }
        void display(){
            cout<<"value of the id_protected is : "<<id_protected;
        }
};
int main()
{
    Child obj1;
    obj1.setId(56);
    obj1.display();
}