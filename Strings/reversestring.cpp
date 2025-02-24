#include<bits/stdc++.h>

using namespace std;

int main()
{

    char arr[] = "BOOLEAN";

    int i = 0;

    for(i; arr[i]!= '\0' ; i++)
    {
        
    }

    i--;

    for(int j=0 ; j<i ; j++,i--)
    {
        char temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    cout << "Reversed string is: " << arr << '\n';


}