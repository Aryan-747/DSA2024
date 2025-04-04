#include<bits/stdc++.h>

using namespace std;

// revise it fool, very frequently asked in DSA rounds

class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            
            
            int l =0;
            int r =0;
    
            int n = nums.size();
            int zeroes = 0;
            int maxer = INT_MIN;
    
            while(r<n)
            {
                if(nums[r] == 0)
                {
                    zeroes++;
                }
    
                if(zeroes>k)
                {
                    if(nums[l] == 0)
                    {
                        zeroes--;
                    }
                    l++;
                }
    
                int len = r-l+1;
                maxer = max(maxer,len);
                r++;
            }
            
    
            return maxer;
        }
    };