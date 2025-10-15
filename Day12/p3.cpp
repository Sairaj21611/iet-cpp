#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int first = 0;
    int second = 1;
    for(int i=0; i<n ; i++)
    {
        cout<<first<<' ';
        int num = first + second;
        first = second;
        second = num;
        
    }
cout<<endl;


}