#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

    int arr[101];
    int len;
    int num;
    cin>>len;
    for(int i = 0; i <len; i++)
    {
        cin>>arr[i];
    }
    cin>>num;


    int a = 0;
    for(int i = 0; i<len; i++)
    {
        if(arr[i] == num) a++;
    }

    cout<<a;

}