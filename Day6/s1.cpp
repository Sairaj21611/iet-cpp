#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5]={10,92,56,40,87};
    int largest=arr[0];
    for(int i=0; i<5; i++)
    {
        if (arr[i]>largest)
        {
           largest=arr[i];
        }
    }
    cout<<"largest element in an array is : "<<largest<<endl;
    int secondlargest;
    for(int i=0;i<5;i++) 
    {
        if (arr[i]>secondlargest,arr[i] != largest)
        {
            secondlargest=arr[i];
        }

    }
    cout<<"secondlargest element in an array is : "<<secondlargest<<endl;

    }