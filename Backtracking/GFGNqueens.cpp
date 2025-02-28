//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
    
    void solve(int col, vector<vector<int>> &ans, vector<int> &board, vector<int> &leftrow, vector<int> &lowerdiag, vector<int> &upperdiag, int n)
    {
        if(col>=n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0 ; row<n ;row++)
        {
            if(leftrow[row] == 0 && lowerdiag[row+col] == 0 && upperdiag[(n-1) + (col-row)] == 0)
            {
                board[col] = row+1;
                leftrow[row] = 1;
                lowerdiag[row+col] = 1;
                upperdiag[(n-1) + (col-row)] =1;
                solve(col+1,ans,board,leftrow,lowerdiag,upperdiag,n);
                board[col] = 0;
                leftrow[row] = 0;
                lowerdiag[row+col] = 0;
                upperdiag[(n-1)+(col-row)] = 0;
                
            }
        }
        
    }
 
  
    vector<vector<int>> nQueen(int n) {
        // code here
        
        int col = 0;
        
        vector<vector<int>> ans;
        vector<int> board(n,0);
        
        vector<int> leftrow(n,0);
        vector<int> lowerdiag(2*n-1,0);
        vector<int> upperdiag(2*n-1,0);
        
        
        solve(col,ans,board,leftrow,lowerdiag,upperdiag,n);
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends