#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    
      int longestKSubstr(string &s, int k) {
          // your code here
          
          int l =0;
          int r =0;
          int n =s.length();
          int maxlen = INT_MIN;
          
          map<int,int> m1;
          
          while(r<n)
          {
              m1[s[r]]++;
              
              if(m1.size() == k)
              {
                  int len = r-l+1;
                                  if(m1[s[l]] == 0)
                  {
                      m1.erase(s[l]);
                  }
                  l++;
              }
              
              r++;
          }
          
          if(maxlen == INT_MIN)
          {
              return -1;
          }
          
          return maxlen;
          
      }
  };