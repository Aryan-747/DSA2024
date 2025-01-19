#include<bits/stdc++.h>

using namespace std;


int * fun(int n)
{
    int *arr= new int[n];
    int k = 1;

    for(int i=0 ; i<n ; i++)
    {
        arr[i] = k;
        k+=10;
    }

    return arr;


}

int main()
{

    int n = 5;

    int* array = fun(n);


    for(int i=0 ; i<n ; i++)
    {
        cout << *array << " ";
        *array++;
    }

}