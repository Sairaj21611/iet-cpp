#include <iostream>
using namespace std;
#include <string.h>
/*
void stringreverse (char * str){
    char * start = str;
    char * end = str + strlen(str)-1;
    char temp;
    while(start<end){
        temp=*start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }*/

int main(){
    int n;
    cout<<"enter lenght of string : ";
    cin>>n;
    char s[n];
    cin>>s;

    for(int i=0 ; i<n/2 ; i++){
        char temp = s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    cout<<s;
}
