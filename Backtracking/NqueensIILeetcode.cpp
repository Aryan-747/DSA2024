#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
    
        void solve(int col, vector<vector<string>> &ans, vector<string> &board,
        vector<int> &arrayleft, vector<int> &lowerdiag, vector<int> &upperdiag, int n, int *&total)
        {
    
    
            if(col>=n)
            {
                ans.push_back(board);
                (*total)++;
                return;
            }
    
            for(int row=0 ; row<n ; row++)
            {
                if(arrayleft[row] == 0 && lowerdiag[row+col] == 0 && upperdiag[(n-1)+(col-row)] == 0)
                {
                    board[row][col] = 'Q';
                    arrayleft[row] = 1;
                    lowerdiag[row+col] = 1;
                    upperdiag[(n-1)+(col-row)] = 1;
    
                    solve(col+1,ans,board,arrayleft,lowerdiag,upperdiag,n,total);
    
                    board[row][col] = '.';
                    arrayleft[row] = 0;
                    lowerdiag[row+col] =0;
                    upperdiag[(n-1)+(col-row)] = 0;
                }
    
            }
    
    
        }
    
    
        int totalNQueens(int n) {
    
            int totalsol = 0;
    
            int col = 0;
    
            int abc = 0;
    
            int *total = &abc;
    
    
            vector<vector<string>> ans;
            vector<string> board(n);
    
            string s(n,'.');
    
            for(int i=0 ; i<n ; i++)
            {
                board[i] = s;
            }
    
            vector<int> arrayleft(n,0);
            vector<int> lowerdiag(2*n-1,0);
            vector<int> upperdiag(2*n-1,0);
    
           solve(col,ans,board,arrayleft,lowerdiag,upperdiag,n,total);
           return ans.size();
            //return abc;
            
        }
    };