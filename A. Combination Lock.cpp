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
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ll rotates = 0;
    for(ll i=0;i<n;i++){
        ll m1 = a[i]-'0'; //cout<<m1<<" ";
        ll m2 = b[i]-'0'; //cout<<m2<<" ";
        ll k2 = abs(m1-m2);
        ll k3 = (10-(abs(m1-m2))%10);
        ll k = min(k2,k3);
        // cout<<k2<<" "<<k3<<"\n";
        // cout<<k<<" ";         
        rotates+=k;
    } 
    cout<<rotates;
    return 0;
}