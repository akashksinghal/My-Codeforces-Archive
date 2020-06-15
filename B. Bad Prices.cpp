// I'm a f*cking looser
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
    vector<ll> A(n);
    input(A,n);
    vector<ll> B(n);
    B[n-1] = A[n-1];
    for(int i=n-2;i>=0;i--){
        B[i] = min(B[i+1],A[i]);
    }
    // for(auto i:B) cout<<i<<" ";
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(A[i]>B[i]) cnt++;
    }
    cout<<cnt<<'\n';
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