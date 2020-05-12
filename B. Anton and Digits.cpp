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
    ll a2,b3,c5,d6,sum = 0;
    cin>>a2>>b3>>c5>>d6;
    ll k= min(a2,min(c5,d6));
    // cout<<k<<"\n";
    // for(int i=k;i>0;i--)
    sum+=(256*k);
    a2-=k;c5-=k;d6-=k;
    k= min(b3,a2);
    // for(int i=k;i>0;i--)
    sum+=(32*k);
    cout<<sum<<"\n";    
    return 0;
}