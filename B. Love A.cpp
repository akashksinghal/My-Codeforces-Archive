#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string loveA;
    int count =0;
    cin>>loveA;
    for(int i=0;i<loveA.size();i++)
        if(loveA[i]=='a' || loveA[i]=='A')
            count++;
    if(count>(loveA.size()/2))
        cout<<loveA.size();
    else
    {
        cout<<count*2-1;
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase=1;
    //cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}