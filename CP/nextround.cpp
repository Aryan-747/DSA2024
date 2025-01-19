#include<iostream>

using namespace std;

int main()
{

    int size,k;

    cin >> size;
    cin >> k;
    k = k-1;


    int arr[size];

    for(int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for(int i=0 ; i<size ; i++)
    {
        if(arr[0] == 0)
        {
            count = 0;
            break;
        }

        else if(arr[i]>=arr[k])
        {   
            if(arr[i] == 0)
            {
                count--;
            }
            count++;
        }
    }    

    cout << count << endl;

}