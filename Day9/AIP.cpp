#include<iostream>
using namespace std;
int main()
{
    int ptr1[4];
    int *ptr2[4];
    cout<<"Enter elemnts in an array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>ptr1[i];
    }
    for(int i=0;i<5;i++)
    {
        ptr2[i]=&ptr1[i];
    }
    cout<<"values are : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*ptr2[i]<<endl;
        
    }
cout<<sizeof(ptr2);
}