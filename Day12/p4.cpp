#include <iostream>
using namespace std;
int main(){
int num ;
int original;
int reverse = 0;
int digit;

cout<<"Enter the numeber : "<<endl;
cin>>num;

original = num;
while(num>0)
{
    digit = num%10;
    reverse =reverse * 10 + digit;
    num/=10;
    

}
if(original==reverse){
    cout<<"irginal stirng is palindrome";
}
else{
    cout<<"Number is not palindromer";
}
}
