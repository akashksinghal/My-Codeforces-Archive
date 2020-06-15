// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
bool isprime(ll n){
    if(n==1) return false;
    if(n==2 || n==3 || n==5) return true;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    vector<ll> A(n);
    input(A,n);
    for(auto i:A){
        ll k = sqrt(i);
        // cout<<isprime(k)<<" ";
        if(isprime(k) and k*k == i)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}