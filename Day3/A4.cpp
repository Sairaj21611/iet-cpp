#include<iostream>
using namespace std;
int main(){
    int x;
    int count=0;
    cout<<"Enter the number : "<<endl;
    cin>>x;
    for(int i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            count++;
            
        }

    }
    if(count==1)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
}