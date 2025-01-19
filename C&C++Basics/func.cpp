#include<bits/stdc++.h>

using namespace std;


int add(int a, int b) // formal parameters
{
    int c = a+b;

    return c;
}

int main()
{

    int num1 = 15;
    int num2 = 25;

    int num3 = add(num1,num2); // actual parameters

    cout << num3 << endl;

}