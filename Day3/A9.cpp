#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char str[50] = "hello world";
    char str1[67] = "hello\0 world";
    int len = strlen(str);
    cout<<" length of string "<<len<<endl;
    cout<<"size of strinf is "<<sizeof(str)<<endl;
    cout<<str<<endl;
    cout<<sizeof(str1)<<endl;
    cout<<strlen(str1)<<endl;
}