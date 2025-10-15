#include<iostream>
#include<string.h>
using namespace std;
int*  ptr;
class cstring
{
    
	public:
    
	~cstring() //destructor in class
	{
		if(ptr) //checking if ptr is null
		{
			delete[] ptr; //if not null, deallocating memory in ptr
			ptr=nullptr;
		}
	}
};
int main()
{
    cout<<ptr<<endl; //add. of ptr
    cout<<*ptr<<endl; //valude in ptr
    cout<<&ptr<<endl;
    
}

