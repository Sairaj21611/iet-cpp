#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    int marks[3];

    public:
        Student(int r=0 , string nm=" ", int m1=0, int m2=0, int m3=0){
            rollno=r;
            name=nm;
            marks[0]=m1;
            marks[1]=m2;
            marks[2]=m3;
        }
        void accept(){
            cout<<"Enter the roll no of a student : "<<endl;
            cin>>rollno;
            cout<<"Enter the name of a student : "<<endl;
            cin>>name;
            for(int i=0; i<3; i++){
                cout<<"Enter the "<<i+1<<" subject marks : "<<endl;
                cin>>marks[i];
            }
        }
        void display(){
            cout<<"------------students details---------"<<endl;
            cout<<"The roll no of a student is : "<<rollno<<endl;
            cout<<"The name of a student is : "<<name<<endl;
            for(int i=0; i<3; i++){
                cout<<"The marks "<<i+1<<"student is : "<<marks[i]<<endl;
            }
            cout<<"Total marks of three subjects are : "<<getTotal()<<endl;
            cout<<"Avarage of the total marks is : "<<getAverage()<<endl;
            cout<<"---------------------------------------------------";
        }
        int getTotal(){
            return marks[0]+marks[1]+marks[2];
        }
        double getAverage(){
            return getTotal()/3;
        }
};
int main(){
    Student s1;
    s1.accept();
    s1.display();
}