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
    ll k;
    string A;
    cin>>k>>A;
    ll len = A.size();
    asc(A);
    ll sum = 0;
    for(auto i:A){
        sum+=(i-'0');
    }
    ll i=0,ans = 0;
    while(sum<k and i<len){
        sum-=(A[i++]-'0');
        sum+=9;
        ans++;
    }
    cout<<ans;
    return 0;
}