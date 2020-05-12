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
    vector<ll> A(n);
    input(A,n);
    int B[n], max = 1;
    B[0]=1;
    for(ll i=1;i<n;i++)
    {
        if(A[i]>=A[i-1])
            B[i]=B[i-1]+1;
        else
            B[i]=1;
        if(max < B[i] )
            max = B[i];
    }
    cout<<max;
    return 0;
}