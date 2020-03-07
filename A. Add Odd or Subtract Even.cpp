#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<0<<endl;
    if(a>b)
    {
        if((a-b)%2!=0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    if(a<b)
    {
        if((b-a)%2==0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}   