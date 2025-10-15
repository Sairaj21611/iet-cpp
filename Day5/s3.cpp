#include<iostream>
using namespace std;
class Account
{
    float bonus=1000;
    public:
    int getbonus()
    {
        return bonus;
    }
};
 class Account1:public Account 
 {  
   public:  
   float salary = 5000; 
   void calculatesalary()
   {
       cout<<"total salary: "<<salary+getbonus();  
   }
   };       
int main()
{  
     Account1 p1;
        cout<<"total salary: "<<p1.salary+p1.getbonus();  
    return 0;  
}