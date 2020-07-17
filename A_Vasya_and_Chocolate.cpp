// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll s,a,b,c;
    cin>>s>>a>>b>>c;
    ll ans = 0;
    ll k = s%(a*c);
    ll o = (s-k)/c;
    ll p = (o/a)*b;
    ans = p + (k/c) + o ;
    cout<<ans<<'\n';
}
int main()
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