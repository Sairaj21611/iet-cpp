#include <iostream>
using namespace std;

class Base 
{
public:
virtual void Base0()=0;
    Base() 
    {
        cout << "Base Constructor\n";
    }
    virtual ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
void Base0(){
    cout<<"Inside virtual Base0 Function";
}
    Derived() {
        cout << "Derived Constructor\n";
    }
    ~Derived() {
        cout << "Derived Destructor\n";
    }
};
int main() {
    Base* p = new Derived(); // Base pointer pointing to Derived object
    delete p; // Calls Derived destructor then Base destructor because destructor is virtual
    return 0;
}
