#include<iostream>
using namespace std;
class Student{
        int rollno,tmarks;
        string bdate;
        public:
        void getData(){
            
            cout<<"Enter the roll no : \n";
            cin>>rollno;
            cout<<"Enter the birth date : \n";
            cin>>bdate;
            cout<<"Enter the marks : \n";
            cin>>tmarks;
    
}
        void dispData(){
            cout<<"The rollno is : "<<rollno<<endl;
            cout<<"The birth date is : "<<bdate<<endl;
            cout<<"The Marks are : "<<tmarks<<endl;
        }
};
int main(){
    Student s1;
    int t;
    cout<<"Enter how many students are there : ";
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"\n";
        s1.getData();
    }
    for(int j=1; j<=t; j++){
        cout<<"\n";
        s1.dispData();
    }
    cout<<"\n";
}