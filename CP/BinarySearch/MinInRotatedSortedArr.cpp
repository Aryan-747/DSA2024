#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findMin(vector<int>& nums) {
    
            int low = 0;
            int high = nums.size()-1;
            int pos = INT_MAX;
    
    
            while(low<=high)
            {
                int mid = (low + high)/2;
    
                if(nums[low]<=nums[mid])
                {
                    pos = min(nums[low],pos);
                    low = mid +1;
                }
                else
                {
                   pos = min(pos,nums[mid]);
                   high = mid -1;
                }
            }
    
            return pos;
            
        }
    };