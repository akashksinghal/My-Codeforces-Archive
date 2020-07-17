// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll b,p,f,h,c;
    cin>>b>>p>>f>>h>>c;
    ll total_buns = b/2;
    ll profit = 0;
    if(h>=c){
        ll k = min(p,total_buns);
        profit = k*h;
        total_buns = max(0LL,total_buns-k);
        profit += min(f,total_buns)*c;
        cout<<profit<<'\n';
    }
    else{
        ll k = min(f,total_buns);
        profit = k*c;
        total_buns = max(0LL,total_buns-k);
        profit += min(p,total_buns)*h;
        cout<<profit<<'\n';
    }
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