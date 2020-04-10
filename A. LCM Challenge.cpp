#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifdef AKS
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    ll ans;
    if(n==1)
        ans=1;
    else if(n==2)
        ans=2;
    else if(n==3)
        ans=6;
    else if(n%2==0)
    {
        if(n%3==0)
            ans=(n-1)*(n-2)*(n-3);
        else
            ans=n*(n-1)*(n-3);
    }
    else
        ans=n*(n-1)*(n-2);
    cout<<ans<<endl;
    return 0;
}