#include<iostream>
using namespace std;
 
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
};
class D
{
public:
  D()  { cout << "D's constructor called" << endl; }
};
 
class B: public D
{
public:
  B()  { cout << "B's constructor called" << endl; }
};

 
class C: public A, public B  // Note the order
{
public:
  C()  { cout << "C's constructor called" << endl; }
};
 
int main()
{
    C c;
    return 0;
}