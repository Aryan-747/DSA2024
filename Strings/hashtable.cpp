#include<bits/stdc++.h>

using namespace std;

int main()
{
    // checking for duplis in only lowercase strings

    char str[] = "illuminati";

    int hashT[26];

    // initializing hashT

    for(int i=0 ; i<26 ; i++)
    {
        hashT[i] = 0;
    }

    for(int i=0 ; str[i]!='\0' ; i++)
    {
        hashT[str[i] - 'a']++;
    }

    for(int i=0 ; i<26 ; i++)
    {
        if(hashT[i]>1)
        {
            cout <<  (char)(i+'a')<< " occurs " << hashT[i] << " times" << endl;
        }
    }



}