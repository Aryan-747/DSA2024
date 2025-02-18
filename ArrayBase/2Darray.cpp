#include<bits/stdc++.h>

using namespace std;

int main()
{

    int row;
    int col;

    cout << "Enter no of rows: ";
    cin >> row;

    cout << "Enter no of columns: ";
    cin >> col;

    int twodarr[row][col];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin >> twodarr[i][j];
        }
    }

    cout << "2D matrix is: " << endl;

    for(int i=0 ; i<row; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout << twodarr[i][j] << " ";
        }
        cout << endl;
    }




}