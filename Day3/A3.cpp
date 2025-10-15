#include <iostream>
#include <string.h>
using namespace std;
void user_strcpy (char*S2,char*S1);

int main()
{

    char str1[10];
    char str2[20];
    cout<<"enter first string\n";
    cin>>str1;
    user_strcpy(str2,str1);
    cout<<"copied string is\n"<<str2;
}
    void user_strcpy(char* S2, char* S1){
    while(*S1!='\0')
    {
        *S2=*S1;
        S2++;
        S1++;
    }
     *S2 = '\0';

    }