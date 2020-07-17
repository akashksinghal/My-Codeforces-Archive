// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll x,y;
    cin>>x>>y;
    if(x>3) cout<<"YES";
    else if(x==1) if(y==1) cout<<"YES"; else cout<<"NO";
    else{
        if(y<=3) cout<<"YES"; else cout<<"NO";
    }
    cout<<'\n';
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