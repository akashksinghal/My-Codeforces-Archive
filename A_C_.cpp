// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll a,b,n,ans = 0 ;
    cin>>a>>b>>n;
    if(b>a) swap(a,b);
    while(b<=n){
        b+=a;
        ans++;
        swap(a,b);
    }
    cout<<ans-1<<'\n';
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