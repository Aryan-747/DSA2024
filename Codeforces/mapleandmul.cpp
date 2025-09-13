#include<bits/stdc++.h>

using namespace std;

int main()
{

    int T;

    cin >> T;


    while(T>0)
    {

        int n1,n2;
        cin >> n1 >> n2;

        int moves = 0;

        while(n1!=n2)
        {
            if(n1*n2 == n2 || n2*n1 == n1)
            {
                moves = 1;
                break;
            }

            int lc = lcm(n1,n2);

            if(lc == n1)
            {
                moves+=1;
                break;
            }

            else if(lc == n2)
            {
                moves+=1;
                break;
            }

            else
            {
                moves = 2;
                break;
            }

        }

        cout << moves << '\n';

        T--;
    }


}