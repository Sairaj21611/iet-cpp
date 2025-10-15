
#include<iostream>
using namespace std;
class Demo{
    int ans = 0;
    int n;
    public:
    void accept(){
        cout<<"Enter the numbers : "<<endl;
        cin>>n;

        for(int i=1; i<n; i++){
            ans=ans+i;
        }
        cout<<"The total of "<<n<<" is "<<ans<<endl;
    }
};
int main(){
    Demo d1;
    d1.accept();
}