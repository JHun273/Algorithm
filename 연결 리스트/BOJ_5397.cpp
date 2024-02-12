#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();

    int n;
    cin>>n;

    string s[n];
    for(int i = 0; i<n; i++)
    {
        cin>>s[i];    
    }

    for(int i = 0; i<n; i++)
    { 
        list<char> L;
        auto t = L.begin();

        for(int j = 0; j<str.length(); j++)
        {
            if((s[i][j] == '<')&&(t!=L.begin()))
            {   t--;    }
            else if((s[i][j] == '>')&&(t!=L.end()))
            {   t++;    }
            else if((s[i][j] == '-')&&(t!=L.begin()))
            {           }

            q.push_back(s[i][j]);
        }

    }
    
    
    






}