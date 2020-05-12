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
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        if(dp[i]!=-1)
        {
            if(i+a<=n)
                dp[i+a]=max(dp[i+a],dp[i]+1);
            if(i+b<=n)
                dp[i+b]=max(dp[i+b],dp[i]+1);
            if(i+c<=n)
                dp[i+c]=max(dp[i+c],dp[i]+1);
        }
    }
    cout<<dp[n];
    return 0;
}