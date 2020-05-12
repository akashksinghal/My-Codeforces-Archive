#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> > A(n);
    for(ll i=0;i<n;i++)
        cin>>A[i].first>>A[i].second;
    ll capacity = 0, ans = 0;
    for(auto i:A)
    {
        capacity = capacity-i.first;
        capacity = capacity+i.second;
        ans = max(ans, capacity);
        // cout<<ans<<" ";
    }
    cout<<ans<<"\n";
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase=1;
    // cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}