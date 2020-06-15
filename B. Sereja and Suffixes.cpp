// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) vector<ll> A(n); for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n,m;
    cin>>n>>m;
    input(A,n);
    set<int> an;
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        an.insert(A[i]);
        ans[i]=an.size();
    }
    int k;
    for(int i=0;i<m;i++){
        cin>>k;
        cout<<ans[k-1]<<'\n';
    }
    // for(auto i:ans) cout<<i<<" ";
    return 0;
}