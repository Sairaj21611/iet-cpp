#include<iostream>
using namespace std;
class Triangle{
    public: 
        double length;
        double breath;
        double compute_area()
        {
            return length*breath;
        }
};
int main()
{
    Triangle obj;
    cout<<"lenght is : "<<endl;
    cin>>obj.length;
    cout<<"breath is : "<<endl;
    cin>>obj.breath;
    cout<<"Area is : "<<obj.compute_area();
}