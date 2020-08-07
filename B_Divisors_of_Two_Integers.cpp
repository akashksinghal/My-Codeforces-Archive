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
    ll n;
    cin>>n;
    vector<ll> A(n);
    map<ll,ll> mp;
    input(A);
    asc(A);
    cout<<A[n-1]<<" ";
    for(auto i:A) mp[i]++;
    for(ll i=1;i*i<=A[n-1];i++){
        if(A[n-1]%i==0){
            if(i==A[n-1]/i){
                mp[i]--;
            }
            else mp[i]--, mp[A[n-1]/i]--;
        }
    }
    vector<ll> res;
    for(auto i:mp){
        if(i.second!=0){
            res.push_back(i.first);
        }
    }
    asc(res);
    cout<<res.back();
    return 0;
}