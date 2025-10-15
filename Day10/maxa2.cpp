#include<iostream>
using namespace std;
class Array{
    int arr[10];
    int n;
    int first=-1;
    int second=-1;
    public:
    void accept(){
        cout<<"Enter the number of array : ";
        cin>>n;
        cout<<"Enter the elements of an array :"<<endl;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }
    void disp(){
        for(int i=0; i<n; i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }else if(arr[i]>second && arr[i != first]){
                second=arr[i];
            }
        }
        cout<<"The second largest element is : "<<second;
    }
};
int main(){
    Array a;
    a.accept();
    a.disp();
}