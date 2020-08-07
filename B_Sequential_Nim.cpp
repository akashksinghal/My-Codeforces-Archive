// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n);
    input(A);
    ll ones = 0;
    for(auto i:A) if(i==1) ones++; else break;
    if(ones == n){
        if((ones&1)) cout<<"First\n";
        else cout<<"Second\n";    
        return;
    }
    if(!(ones&1)) cout<<"First\n";
    else cout<<"Second\n";
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