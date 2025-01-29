#include<bits/stdc++.h>

using namespace std;

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> returnme;
        
        
        int max = INT_MIN;
        
        for(int i= arr.size()-1 ; i>=0 ; i--)
        {
            if(arr[i]>=max)
            {
                returnme.push_back(arr[i]);
                max = arr[i];
            }
        }
       
       reverse(returnme.begin(),returnme.end());
        
        return returnme;
    }
};