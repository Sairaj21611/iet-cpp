#include <iostream> 
using namespace std; 
class Base 
{ 
private: 
    string pvt = "private specifier in base"; 
protected: 
    string prot = "protected specifier in base"; 
public: 
    string pub = "public specifier in base";  
    string get() { return pvt; } 
}; 
  
class privatederived : private Base 
{ 
public: 
    string getProt() { return prot; } 
    string getPub() { return pub; } 
}; 
  
int main() 
{ 
    privatederived object1; 
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
    cout << "Public = " << object1.getPub() << endl; 
    return 0; 
}