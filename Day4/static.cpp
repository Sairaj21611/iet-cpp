#include<iostream>
#include<string.h>
using namespace std;
class college
{
    public:
        char s_name[30];
        int r;
        static char c_name[];
        void details(const char* name, int roll) 
        {
            strcpy(s_name, name);
            r = roll;
        }
        void outdetails() {
            cout<<"College Name : " <<c_name<<endl;
            cout<<"Student Name : " <<s_name<<endl;
            cout<<"Roll No. : " <<r<<endl;
        }
       
};
char college::c_name[] = "SPPU";
int main()
{
    college s1;
    s1.details("saket", 1);
    s1.outdetails();
    
    college s2;
    s2.details("sairaj", 2);
    s2.outdetails();
}
   
