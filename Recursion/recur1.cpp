#include<bits/stdc++.h>

using namespace std;


// Type 1
void fun1(int n)
{

    if(n>0)
    {
        cout << n << endl;
        fun1(n-1);
    }
}


// Type 2
void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout << n << endl;
    }

}


int main()
{

    int n = 7;

    fun1(n);

    cout << "--------" << endl;

    fun2(n);
}