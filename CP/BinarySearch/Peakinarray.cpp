#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findPeakElement(vector<int>& arr) {
    
            int low = 1;
            int high = arr.size()-2;
    
            if(arr.size()==1)
            {
                return 0;
            }
    
            if(arr[0]>arr[1])
            {
                return 0;
            }
    
            if(arr[arr.size()-1]>arr[arr.size()-2])
            {
                return arr.size()-1;
            }
    
            while(low<=high)
            {
                int mid = (low+high)/2;
    
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                {
                    return mid;
                }
    
                else if(arr[mid]<arr[mid+1])
                {
                    low = mid +1;
                }
                else
                {
                    high = mid -1;
                }
            }
    
            return -1;
            
        }
    };