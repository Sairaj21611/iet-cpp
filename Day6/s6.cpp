#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int c;
    int r;
    cout<<"Enter no. of rows : \n";
    cin>>c;
    cout<<"Enter no. of colmns : \n";
    cin>>r;

    cout<<"Enter elements of an array : \n";
    for(int i=0; i<c;i++ )
    {
        for(int j=0; j<r; j++)
        {
            cin>>arr[i][j];  
        }
    }
    cout<<"Matrix is : \n";
    for(int i=0; i<c;i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<arr[i][j]<<" ";  
        }
        cout<<endl;
    }


    int transpose[10][10];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose of the matrix is : \n";
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < r; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout<<" "<<endl;
    }    

}
