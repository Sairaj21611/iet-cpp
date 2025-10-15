#include<iostream>
using namespace std;
class Complex
{
	public:
	static string abc;
};
string Complex::abc="ABC";
int main()
{
	cout<<Complex::abc;
}