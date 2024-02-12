#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> L;

    string s;
    cin>>s;
    for(auto e : s)
    {
        L.push_back(e);
    }

    int n;
    cin>>n;

    auto t = L.end();
    for(int i = 0; i<n; i++)
    {
        char x[2] = {-1, };
        cin>>x[0];
        if(x[0] == 'P') 
        {   
            cin>>x[1];
            L.insert(t, x[1]);
        }
        else if(x[0] == 'L')
        {
            if(t != L.begin()) t--;
        }
        else if(x[0] == 'D')
        {
            if(t != L.end()) t++;
        }
        else if(x[0] == 'B')
        {
            if(t != L.begin()) {
                t--;
                t = L.erase(t);//여기서 t = 이 왜 필요함?==> erase 함수가 삭제한 다음 원소를 반환하기 때문에
            }

        }
    }

    for(auto e : L)
    {
        cout<<e;
    }

    //getline함수로 줄바꿈 같은거 걸러내는 방법 알아두기

}