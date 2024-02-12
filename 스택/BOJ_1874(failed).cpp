#include <bits/stdc++.h>
using namespace std;

stack<int> S;
queue<int> Q;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    cin>>n;

    int a=0, b = 0, T=0;
    bool stop = false;

    for(int i = 0; i<n; i++)
    {
        cin>>a;

        
            if(a<T)
            {
                if((T==b)&&((T-a)>1))
                {
                    cout<<"NO"<<'\n';
                    stop = true;
                }
                else if((a<T)&&(a>b))
                {
                    cout<<"NO"<<'\n';
                    stop = true;
                }
                else{Q.push('-'); b=a;}
            }
            else if(a>=T)
            {
                for(int j = T+1; j<=a; j++)
                {
                    Q.push('+');
                }
                T=a;
                b=a;
                Q.push('-');
            }
        

    }

    int p = 1;
    while(!Q.empty()&&!stop)
    {
        if(Q.front()=='+')
        {
            S.push(p); cout<<'+'<<'\n';
            p++;
            Q.pop();
        }
        else if(Q.front()=='-')
        {
            S.pop(); cout<<'-'<<'\n';
            Q.pop();
        }
    }





}



/*


    for(int i = 0; i<n; i++)
    {
        cin>>a;

        if((a<T)&&(a>b))
        {
            cout<<"NO"<<'\n';
            return 0;
        }
        else
        {
            if(a<T){S.pop(); cout<<'-'<<'\n'; b=a;}
            else if(a>=T)
            {
                for(int i = T+1; i<=a; i++)
                {
                    S.push(i);
                    cout<<'+'<<'\n';
                }
                T=a;
                b=a;
                S.pop(); cout<<'-'<<'\n';
            }
        }

    }
*/