#include<bits/stdc++.h>

using namespace std;

int BS(int low, int high, int key, int* arr)
{

    int mid;

    if(low<=high)
    {
        mid = (low+high)/2;


        if(arr[mid] == key)
        {
            return mid;
        }

        else if(key>arr[mid])
        {
            return BS(mid+1,high,key,arr);
        }

        else
        {
            return BS(low,mid-1,key,arr);
        }

    }

    return -1;

}


int main()
{
    int *arr = new int[100];

    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    cout << "Sorted array is: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int ind = BS(0,n-1,target,arr);

    if(ind == -1)
    {
        cout << "Not Found :(" << "\n";
    }

    else
    {
        cout << "Element Found at index: " << ind << " \n";
    }
}