#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define ascend(A) sort(A.begin(),A.end())
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> A(n);
    input(A,n);
    ll res=1;
    if(n>m)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
            res = ((res%m)*abs(A[i]-A[j])%m)%m;
    }
    cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("a_example.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
    int testcase=1;
    //cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}