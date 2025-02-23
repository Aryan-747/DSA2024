#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> find(vector<int>& arr, int x) {
          // code here
          
          // first occurence
          
          int low = 0;
          int high = arr.size()-1;
          
          int find = INT_MAX;
          int lind = INT_MIN;
          
          while(low<=high)
          {
              int mid = (low+high)/2;
              
              if(arr[mid] == x)
              {
                  find = min(find,mid);
                  high = mid -1;
              }
              
              else if(arr[mid]>=x)
              {
                  high = mid -1;
              }
              else
              {
                  low = mid +1;
              }
          }
          
          low = 0;
          high = arr.size()-1;
          
          while(low<=high)
          {
              int mid = (low+high)/2;
              
              if(arr[mid]==x)
              {
                  lind = max(lind,mid);
                  low = mid +1;
              }
              
              else if(arr[mid]<=x)
              {
                  low = mid +1;
              }
              else
              {
                  high = mid -1;
              }
          }
          
          // X NOT FOUND
          if(find == INT_MAX && lind == INT_MIN)
          {
              return {-1,-1};
          }
          
          return {find,lind};
      }
  };