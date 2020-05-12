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
    ll ans = 0,level =0;
    while(ans<=n){
        level++;
        if(ans+((level*(level+1))/2)<=n)
        {
            ans+=(level*(level+1))/2;
        }
        else
        {
            level--;
            break;
        }
    }
    cout<<level;
    return 0;
}