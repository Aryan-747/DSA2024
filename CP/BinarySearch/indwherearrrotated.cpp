#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
      int findKRotation(vector<int> &arr) {
          // Code Here
          
          int low = 0;
          int high = arr.size()-1;
          
          int mini = INT_MAX;
          int ind = 0;
          
          while(low<=high)
          {
              int mid = (low+high)/2;
              
              if(arr[low]<=arr[mid])
              {
                  if(arr[low]<mini)
                  {
                      ind = low;
                      mini = arr[low];
                  }
                  low = mid +1;
              }
              else
              {
                  if(arr[mid]<mini)
                  {
                      ind = mid;
                      mini = arr[mid];
                  }
                  high = mid -1;
              }
          }
          
          
          return ind;
      }
  };