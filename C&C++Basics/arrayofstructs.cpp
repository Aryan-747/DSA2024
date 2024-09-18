#include<bits/stdc++.h>

using namespace std;


struct data
{
    int rno;
    string name;
    int age;

};

int main()
{

    struct data s[3];

    s[0].rno = 1;
    s[0].name = "Aryan";
    s[0].age = 20;

    s[1].rno = 2;
    s[1].name = "Rohan";
    s[1].age = 21;

    s[2].rno = 3;
    s[2].name = "Rahul";
    s[2].age = 22;

    cout << s[0].name << endl;
    cout << s[0].age << endl;

    cout << s[2].name << endl;
    cout << s[2].age << endl;



    return 0;
}