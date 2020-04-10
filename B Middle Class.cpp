#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N,K;
    cin>>N>>K;
    vector<ll> A(N);
    input(A,N);
    dsc(A);
    ll sum =0, res = 0;
    for(ll i=0;i<N;i++)
    {
        sum+=A[i];
        auto k = sum/(i+1);
        if(k>=K)
            res++;
    }
    cout<<res<<endl;
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}