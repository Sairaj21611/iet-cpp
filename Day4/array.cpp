#include<iostream>
using namespace std;
class employee{
    int id;
    char name[30];
    public:
        void getData();
        void putData();
};
void employee::getData(){
    cout<<"Enter the Id : \n";
    cin>>id;
    cout<<"Enter the name : \n";
    cin>>name;
}
void employee::putData(){
    cout<<id<<"\t";
    cout<<name<<endl;
}
int main(){
    employee emp[30];
    int n,i;
    cout<<"Enter the number of employee : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        emp[i].getData();
    }
    cout<<"Employee Data - \n";

    for(int i=1; i<=n; i++){
        emp[i].putData();
    }
}