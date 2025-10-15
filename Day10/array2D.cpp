#include<iostream>
using namespace std;
class Array{
    int arr[10][10];
    int r;
    int c;
    public:
        void accept(){
            cout<<"Enter the number of rows : ";
            cin>>r;
            cout<<"Enter the number of coloumns : ";
            cin>>c;
            cout<<"Enter the array elements : "<<endl;
            for(int i=1; i<=r; i++){
                for(int j=1; j<=c; j++){
                    cin>>arr[i][j];
                }
                
            }
        }
        void display(){
             cout<<"Your array is :"<<endl;
            for(int i=1; i<=r; i++){
                for(int j=1; j<=c; j++){
                   cout<<"\t"<<arr[i][j];
                }
                cout<<endl;
            }
          
        }
};
int main(){
    Array a;
    a.accept();
    a.display();
    return 0;
}