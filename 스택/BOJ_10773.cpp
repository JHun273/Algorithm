#include <bits/stdc++.h>
using namespace std;

stack<int> S;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a;
    cin>>n;


    for(int i = 0; i<n; i++)
    {
        cin>>a;
        if(a==0)
        {
            if(S.empty()==0) S.pop();
        }
        else
        {
            S.push(a);
        }
    }

    int sum = 0;
    int q = S.size();

    for(int i = 0; i<q; i++)
    {
        sum+=S.top();
        if(S.empty()==0) S.pop();
    }


    cout<<sum<<'\n';
}