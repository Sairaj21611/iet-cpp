#include <iostream>

using namespace std;
 int main()
 {
    int num,sum=0;
    cout<<"enter a number\n";
    cin>>num;
    while(num!=0)
    {
        int r1=num%10;
        sum=sum+r1;
        num=num/10; 
    } 
cout<<sum<<endl;
 }