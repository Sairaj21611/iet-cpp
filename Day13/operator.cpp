#include<iostream>
using namespace std;
class Number{
    public:
    int num;
    int temp;
    public:
    Number(int n){
        num=n;
    }
    Number operator+(const Number &s){
        
       return Number(num+s.num);
    }
   // void disp(){
     //   cout<<temp<<endl;
    //}
};
int main(){
    Number s1(10);
    Number s2(20);
 //  s1.disp();
   // s2.disp();

    Number s3 = s1 + s2;
    cout<<"REsult "<<s3.num<<endl;
}