#include<bits/stdc++.h>

using namespace std;


int binsearch(int low, int high, int n, int* Arr ,int key)
{

    int mid = 0;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(Arr[mid] == key)
        {
            return mid;
        }

        else if(key>Arr[mid])
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



int main()
{
    int *Arr = new int[100];

    int n;

    cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        cin >> Arr[i];
    }

    sort(Arr,Arr+n);

    cout << "Sorted Array is: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;

    int low = 0;
    int high = n-1;

    int find;

    cout << "Enter element to search: ";
    cin >> find;

    int foundind = 0;

    foundind = binsearch(low,high,n,Arr,find);

    if(foundind == -1)
    {
        cout << "ERROR 404 Resource not Found!" << "\n";
    }

    else
    {
        cout << "Element Found at index: " << foundind << "\n";
    }


}