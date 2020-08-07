// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> A(n),B(m),B1;
    input(A); input(B);
    set<ll> A1;
    for(auto i:A) A1.insert(i);
    for(auto i:B){
        if(A1.find(i)!=A1.end()){
            B1.push_back(i);
        }
    }
    if(B1.size()>=1){
        cout<<"YES\n";
        asc(B1);
        cout<<1<<' '<<B1[0]<<'\n';
    }
    else cout<<"NO\n";
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