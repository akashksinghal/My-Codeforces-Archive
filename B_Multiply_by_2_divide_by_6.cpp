// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, ct2 = 0, ct3 = 0;
    cin >> n;
    while(n%2==0) ct2++, n>>=1;
    while(n%3==0) ct3++, n/=3;
    if(n!=1 or ct3<ct2) cout<<-1<<'\n';
    else cout << ct3 + (ct3-ct2) <<'\n';
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