#include<iostream>
using namespace std;
class inhe
{
    private: 
    int pvt=1;
    public: 
    int pub=2;
    protected: 
    int pro=3;
    public: int getpvt() {return pvt;}
};
   
class publicderived:public inhe{
    public:
           int getpro() {return pro;}
    public:
           int getpub() {return pub;}      
};
int main()
{
    publicderived obj1;
    cout<<"private="<<obj1.getpvt()<<endl;
    cout<<"protected="<<obj1.getpro()<<endl;
    cout<<"public="<<obj1.getpub()<<endl;
    
}