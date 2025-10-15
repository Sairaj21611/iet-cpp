#include<iostream>
using namespace std;
class Array{
     int arr[5];
    public:
        void accept(){
            
    cout<<"Entre the elements of an array : "<<endl;
    for(int i=1; i<=5; i++){
        cin>>arr[i];
    }
    

        }
    void display(){
                  cout<<"The elements in an array are : "<<endl;
    for(int i=1; i<=5; i++){
    cout<<arr[i]<<"\t";
    }
    }
};
int main(){
    Array a;
    a.accept();
    a.display();
}