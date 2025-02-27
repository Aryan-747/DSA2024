#include<bits/stdc++.h>

using namespace std;


class Solution{
    public:
    //Complete this function
    
    void permuts(vector<string> &ans, string S, int freq[], vector<char>ds)
    {
        if(ds.size() == S.length())
        {
            string zizou(ds.size(),' ');
            
            for(int i=0 ; i<ds.size() ; i++)
            {
                zizou[i] = ds[i];
            }
            ans.push_back(zizou);
            return;
        }
        
        for(int i=0 ; i<S.length(); i++)
        {
            if(freq[i] == 0)
            {
                ds.push_back(S[i]);
                freq[i] =1;
                permuts(ans,S,freq,ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
        
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        int freq[S.length()];
        for(int i=0 ; i<S.length() ; i++)
        {
            freq[i] = 0;
        }
        vector<char> ds;
        vector<string> ans;
        permuts(ans,S,freq,ds);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};