#include<iostream>
using namespace std;
class test
{
	public:
	test()
	{
		cout<<"constructor is invoked\n";
	}
	~test()
	{
		cout<<"destructor is invoked\n";
	}
};
test t1;
int main()
{
	cout<<"main begins\n";
	test t2;
	{
		cout<<"block begins\n"<<endl;
		test t3;
		cout<<"block ends\n"<<endl;
	}
	cout<<"main ends\n"<<endl;
}