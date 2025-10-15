#include<iostream> 
using namespace std; 
class Employee
{
	int id;
public:
	Employee();
	Employee(int);
     void display();
	 int findsalary()
	{
		return 0;
	}
};
Employee::Employee()
{
	cout<<"in default of employee\n";
	id=0;
}
Employee::Employee(int i)
{
	cout<<"in para of employee\n";
	id=i;
}
void Employee::display()
{
	
	cout<<"id of an employee is "<<id<<endl;
}
class Wageemployee:public Employee
{
	int hrs,rate;
public:
	Wageemployee();
	Wageemployee(int,int,int);
     void display();
	 int findsalary()
	{
		return hrs*rate;
	}
};
Wageemployee::Wageemployee()
{
	cout<<"in default of wageemployee\n";
	hrs=rate=0;
}
Wageemployee::Wageemployee(int i,int j,int k):Employee(i)
{
	cout<<"in para of wageemployee\n";
	hrs=j;
	rate=k;
}
void Wageemployee::display()
{
	Employee::display();
	cout<<"hours of an employee is "<<hrs<<endl;
	cout<<"rate of an employee is "<<rate<<endl;
	
}
	
class Salesperson:public Wageemployee
{
	int sales,comm;
public:
Salesperson();
Salesperson(int,int,int,int,int);
     void display();
	 int findsalary()
	{
		return Wageemployee::findsalary() + sales*comm;	
	}
};
Salesperson::Salesperson()
{
	cout<<"in default of Salesperson\n";
	sales=comm=0;
}
Salesperson::Salesperson(int i,int j,int k,int l,int m):Wageemployee(i,j,k)
{
	cout<<"in para of salespersonn";
	sales=l;
	comm=m;
}
void Salesperson::display()
{
	Wageemployee::display();
	cout<<"sales of an employee is "<<sales<<endl;
	cout<<"comm of an employee is "<<comm<<endl;
	
}
int main()
{
	Salesperson sp1(2,50,5000,10000,1);
	sp1.display();
}