#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
      int totalElements(vector<int> &arr) {
          
          int l = 0;
          int r = 0;
          
          int maxles = 0;
          
          map<int,int> map1;
          
          int n = arr.size();
          
          while(r<n)
          {
              map1[arr[r]]++;
              
              if(map1.size()>2)
              {
                 map1[arr[l]]--;
                 
                 if(map1[arr[l]] == 0)
                 {
                     map1.erase(arr[l]);
                 }
                 
                 l++;
              }
              
              int len = r-l+1;
              
              maxles = max(maxles,len);
              
              r++;
          }
          
          return maxles;
      }
  };