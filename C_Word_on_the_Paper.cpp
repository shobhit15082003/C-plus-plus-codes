// Code by Shobhit
#define pb push_back
#define ll long long

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string input;
        vector<string> v;
        int i, index = 0;
        int flag = 0;
        for (i = 0; i < 8; i++)
        {
            cin >> input;
            v.push_back(input);
            for (int j = 0; j < 8 && flag == 0; j++)
            {
                char ch = input.at(j);
                if (ch != '.')
                {
                    index = j;
                    flag = 1;
                    //cout<<ch<<endl;
                }
            }
        }
        
        for (int k = 0; k < 8; k++)
        {
            char ch = v[k].at(index);
            if (ch != '.')
                cout << ch;
        }
        cout << endl;
     }
}

