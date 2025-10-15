#include<iostream>
using namespace std;

int main()
{
    int n;
    int Prime;
    cout<<"Enter no. : ";
    cin>>n;
    if (n<2 )
    cout<<"not a prime";
    for(int i=2;i<n; i++ )
    {
        if(n%i == 0)
        {
            cout<<"not a prime ";
            return 0;
        }
        cout<<" ";
    }
    cout<<"No. is prime"<<endl;
}