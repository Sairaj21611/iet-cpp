#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
        Complex();
        Complex(int, int);
        void display(); 
        void setReal(int); 
        int getReal();
};
void Complex::setReal(int r){
    real=r;
}
int Complex::getReal(){
    return real;
}
Complex::Complex(){
    cout<<"In default constractor";
    real=1;
    img=2;
}
Complex::Complex(int r, int i){
    cout<<"In paramatarized constractor\n";
    real=r;
    img=i;
}
void Complex::display() {
    cout<<"Complex number is : "<<real<<"+"<<img<<"i";
}
int main(){
    Complex c2(5,6);
    cout<<"real part"<<c2.getReal();
}