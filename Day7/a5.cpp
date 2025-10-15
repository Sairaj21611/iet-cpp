#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char str[10] = "Hello";
    char str1[10];
    int x=strlen(str);
    int y=0;
    while(x>=0){
        str1[y]=str[x];
        x--;
        y++;
    }
    str1[y]='\0';
    cout<<"The reversed string is : "<<str1<<endl;
}
