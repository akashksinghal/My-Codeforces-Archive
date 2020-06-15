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
    int n,sum=0;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        for(int j = n;j;sum+=j%i,j/=i);
    }
    n = n-2;
    ll k = __gcd(sum,n);
    sum/=k;
    n/=k;
    cout<<sum<<'/'<<n;
    return 0;
}