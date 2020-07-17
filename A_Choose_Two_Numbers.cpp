// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())

signed main()
{
    fasino
    ll n,m;
    cin>>n;
    vector<ll> A(n); input(A);
    cin>>m;
    vector<ll> B(m); input(B);
    asc(A);
    asc(B);
    cout<<A.back()<<" "<<B.back();
    return 0;
}