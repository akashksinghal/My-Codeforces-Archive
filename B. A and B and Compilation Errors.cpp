// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n,temp;
    cin>>n;
    // unordered_map<ll, ll> mp;
    // for(ll i=0;i<n;i++){
    //     cin>>temp;
    //     mp[temp]++;
    // }
    vector<ll> a(n);
    input(a,n); asc(a);
    vector<ll> A(n-1);
    input(A,n-1); asc(A);
    vector<ll> B(n-2);
    input(B,n-2); asc(B);
    vector<ll> tmp(2);
    set_difference(a.begin(), a.end(), A.begin(), A.end(), tmp.begin());
    set_difference(A.begin(), A.end(), B.begin(), B.end(), tmp.begin()+1);
    for(auto i:tmp){
        cout<<i<<"\n";
    }
    return 0;
}