#include <iostream>
using namespace std;
int main() 
{
    int r;
    cout<<"Enter the no. of rows : \n";
    cin>>r;
    int c;
    cout<<"Enter the no. of columns : \n";
    cin>>c;
    int matrix[r][c];
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            matrix[i][j] = i * c + j + 1;
        }
    }


    cout << "\nThe matrix is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}