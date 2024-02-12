#include <bits/stdc++.h>
using namespace std;

stack<int> S;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    string s;
    int a;

    for(int i = 0; i < n; i++)
    {
        cin>>s;
        if(s == "push")
        {
            cin>>a;
            S.push(a);
        }
        else if(s == "pop") 
        {
            if(S.empty()) { cout<<-1<<'\n';}
            else {cout<<S.top()<<'\n'; S.pop();}
        }
        else if(s == "size") {cout<<S.size()<<'\n';}
        else if(s == "empty")
        {
            if(S.empty()) { cout<<1<<'\n';}
            else { cout<<0<<'\n';}
        }
        else if(s == "top") 
        {
            if(S.empty()) { cout<<-1<<'\n';}
            else {cout<<S.top()<<'\n';}
        }
    }

}