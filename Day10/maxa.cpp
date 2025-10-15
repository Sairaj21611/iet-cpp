#include<iostream>
using namespace std;
class Array{
    int first = -1;
    int second = -1;
    public:
    void disp(){
          int arr[10] = {1,2,9,3,8,4,7,5,3};
    for(int i=0; i<8; i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i] != first){
            second = arr[i];
        }
   }
   cout<<second<<endl;
    }
};
int main(){
    Array a;
    a.disp();

    return 0;
  
}
