 #include<bits/stdc++.h>

 using namespace std;

 
 bool isAnagram(string s, string t) {

    if(s.length()!= t.length())
    {
        return false;
    }

    else
    {

        bool check = true;

        int* alphabets = new int[26];

        for(char i : s)
        {
            alphabets[i-'a']++;
        }

        for(char i: t)
        {
            alphabets[i-'a']--;
        }

        for(int i=0 ; i<26 ; i++)
        {
            cout << alphabets[i] << " ";
        }

        return check;

    }

        

        
 }

 int main()
 {

    string s1;
    string s2;

    getline(cin,s1);
    getline(cin,s2);

    bool check = isAnagram(s1,s2);

    cout << check << endl;
 }
        