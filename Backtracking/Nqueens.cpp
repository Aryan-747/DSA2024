#include<bits/stdc++.h>

using namespace std;


// Try to solve another question where you need to provide total no of distinct posssibilities


void solve(int col, vector<vector<string>> &ans, vector<string> &board ,vector<int> &rowleft, vector<int> &lowerdiag, vector<int> &upperdiag, int n)
{

    if(col == n)
    {
        ans.push_back(board);
        return;
    }

    for(int row = 0 ; row<n ; row++)
    {

        if(rowleft[row] == 0 && lowerdiag[row+col] == 0 && upperdiag[(n-1) + (col-row)] == 0)
        {
            board[row][col] = 'Q';
            rowleft[row] = 1;
            lowerdiag[row+col] = 1;
            upperdiag[(n-1)+(col-row)] = 1;
            solve(col+1,ans,board,rowleft,lowerdiag,upperdiag,n);
            board[row][col] = '.';
            rowleft[row] = 0;
            lowerdiag[row+col] = 0;
            upperdiag[(n-1)+(col-row)] =0;
        }

    }

}

int main()
{
    int n = 4;
    int col = 0;


    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');

    for(int i=0 ; i<n ; i++)
    {
        board[i] = s;
    }

    vector<int> rowleft(n,0), lowerdiag(2*n-1,0), upperdiag(2*n-1,0);


    solve(col,ans,board,rowleft,lowerdiag,upperdiag,n);

    for(int i=0 ; i<ans.size() ; i++)
    {
        for(int j=0 ; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << '\n';
        }

        cout << endl;
    }



}