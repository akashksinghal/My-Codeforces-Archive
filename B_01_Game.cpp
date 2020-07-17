// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    string A;
    cin>>A;
    int cnt[2]={0};
    for(auto i:A) cnt[i-'0']++;
    string k[]={"DA\n","NET\n"};
    int m = min(cnt[0],cnt[1]);
    cout<<k[(m+1)%2];
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}