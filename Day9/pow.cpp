#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    double b,e;
    double answer;
    cout<<"Enter base "<<endl;
    cin>>b;
    cout<<"Enter exponent "<<endl;
    cin>>e;
    answer = pow(b,e);
   
    cout << b <<" "<<"to the power" <<" " <<e<<" is"<<" " << answer;
    
}