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
    ll n,l;
    cin>>n>>l;
    vector<ll> A(n);
    input(A,n);
    asc(A);
    double ans = INT16_MIN;
    for(int i=0;i<n;i++)
        if(i==0)
            ans = A[i];
        else
            ans = max(double(ans), double(A[i]-A[i-1])/2);
    ans = max(double(ans),double(l-A[n-1]));
    cout<<fixed<<setprecision(7)<<double(ans);
    return 0;
}