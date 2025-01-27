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
        this->fname = name;
        this->age = age;
    }


    void display()
    {
        cout << "Mandom Name is: " << this->fname << endl;
        cout << "Mandom Age is: " << this->age << endl;
    }

    void getinfo()
    {
        getline(cin, this->fname);
        cin >> this->age;
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