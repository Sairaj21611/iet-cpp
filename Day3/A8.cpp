#include <iostream>
#include <string.h>
using namespace std;
class Students
{
    int Rollno;
    char name [15];
    public:
    Students()
    {
        Rollno=47;
        strcpy(name, "Saket");
    }
      Students(int i, char*ptr)
      {
        Rollno = i;
        strcpy(name,ptr);
      }
      void display()
      {
        cout<<"Student Rollno is "<<Rollno<<endl;
        cout<<"Student name is "<<name<<endl;
      }
    
};
int main()
{
    Students S1;
    S1.display();
}