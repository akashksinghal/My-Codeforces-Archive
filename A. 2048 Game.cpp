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
    asc(A);
    map<int,int> mp;
    vector<int> K;
    for(int i=1;i<=2048;){
        mp[i]=0;
        K.push_back(i);
        i*=2;
    }
    for(auto i:A){
        mp[i]++;
    }
    for(auto i:K){
        if(i==2048) break;
        mp[i*2]+=mp[i]/2;
    }
    if(mp[2048]>=1) cout<<"YES\n";
    else cout<<"NO\n";
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