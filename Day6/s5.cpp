#include <iostream>
using namespace std;

int main() 
{
    int matrix[5][5];

    cout << "Enter matrix elements:\n";
    for (int i=0; i<2; i++) 
    {
        for (int j=0; j<2; j++) 
        {
            cin>>matrix[i][j];
        }
    }

    cout << "Matrix is:\n";
    for(int i=0; i<2; i++) 
    {
        for(int j=0; j<2; j++) 
        {
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
}
