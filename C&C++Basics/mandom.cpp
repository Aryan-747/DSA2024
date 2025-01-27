#include<bits/stdc++.h>

using namespace std;

class Mandom
{
    public:

    string fname;
    int age;

    // Default Constructor

    Mandom()
    {
        
    }

    // Parameterized Constructor

    Mandom(string name, int age)
    {
        fname = name;
        age = age;
    }


    void display()
    {
        cout << "Mandom Name is: " << fname << endl;
        cout << "Mandom Age is: " << age << endl;
    }

    void getinfo()
    {
        getline(cin, fname);
        cin >> age;
    }
};

int main()
{
    Mandom man1 = Mandom("Aryan",25);
    Mandom man2;

    man2.getinfo();
    man1.display();
    man2.display();


}