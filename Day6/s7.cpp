#include<iostream>
using namespace std;
int main()
{
    int arr1[10][10];
    int c1;
    int r1;
    cout<<"Enter no. of rows in 1st matrix : \n";
    cin>>c1;
    cout<<"Enter no. of colmns in 1st matrix : \n";
    cin>>r1;

    cout<<"Enter elements of an array in 1st matrix : \n";
    for(int i=0; i<c1;i++ )
    {
        for(int j=0; j<r1; j++)
        {
            cin>>arr1[i][j];  
        }
    }
    cout<<"1st Matrix is : \n";
    for(int i=0; i<c1;i++)
    {
        for(int j=0; j<r1; j++)
        {
            cout<<arr1[i][j]<<" ";  
        }
        cout<<endl;
    }

    int arr2[10][10];
    int c2;
    int r2;
    cout<<"Enter no. of rows in 2nd matrix : \n";
    cin>>c2;
    cout<<"Enter no. of colmns in 2nd matrix : \n";
    cin>>r2;

    cout<<"Enter elements of an array in 2nd matrix : \n";
    for(int i=0; i<c2;i++ )
    {
        for(int j=0; j<r2; j++)
        {
            cin>>arr2[i][j];  
        }
    }
    cout<<"2nd Matrix is : \n";
    for(int i=0; i<c2;i++)
    {
        for(int j=0; j<r2; j++)
        {
            cout<<arr2[i][j]<<" ";  
        }
        cout<<endl;
    }
      int main();

    {
    int result[10][10];
       for (int i = 0; i < r1; i++)
       {
        for (int j = 0; j < c2; j++) 
            {
            for (int k = 0; k < c1; k++) 
                {
                result[i][j] += arr1[i][k] * arr2[k][j];
                }
                cout<<endl;
            }
        }
        
    
        cout <<"Multiplication of both matrices = \n";
        for(int i = 0; i < r1; i++) 
        {
        for(int j = 0; j < c2; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
        }
    }

}

