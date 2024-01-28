#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    int arr[10] = {};

    int i = 1;
    while(true)
    {
        i*=10;
        if(N/i)
        {
            arr[((N%i)/(i/10))]++;
        }
        else 
        {
            arr[((N/(i/10)))]++;
            break;
        }
    }
    int a=0,b=0;
    for(int j =0; j<10; j++)
    {
        if(j == 6 || j == 9) b+=arr[j];
        else if(arr[j]>a) a=arr[j];
    }

    if(b/2<a) cout<<a;
    else if((b/2==a)&&(b%2==1)) cout<<a+1;
    else if((b/2==a)&&(b%2==0)) cout<<a;
    else if((b/2>a)&&(b%2==1)) cout<<(b/2)+1;
    else if((b/2>a)&&(b%2==0)) cout<<b/2;
}

