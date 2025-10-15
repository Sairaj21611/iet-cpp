#include<iostream>
using namespace std;
class temp
{
	int *ptr;
	int i;
public:
	temp();
	void get();
	void show();
	int max();
	int min();
};
temp::temp()
{
	cout<<"how many elements do u want to store\n";
	cin>>i;	
	ptr=new int[i];
}
void temp::get()
{
	cout<<"accept elements\n";
	for(int i=0;i<i;i++)
	cin>>ptr[i];//cin>>*(ptr+i)
}
void temp::show()
{
	cout<<"value are\n";
	for(int i=0;i<i;i++)
	cout<<ptr[i]<<"\n";
}
int temp::max()
{
	int m=ptr[0];
	for(int i=1;i<i;i++)
	if(ptr[i]>m)
	m=ptr[i];
	return m;
}
int temp::min()
{
	int m=ptr[0];
	for(int i=1;i<i;i++)
	if(ptr[i]<m)
	m=ptr[i];
	return m;
}
int main()
{
	temp a;
	a.get();
	a.show();
	cout<<"maximum number is "<<a.max()<<endl;
	cout<<"minimum number is "<<a.min()<<endl;
}