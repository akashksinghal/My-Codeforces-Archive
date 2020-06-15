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
    int n,k;
    cin>>n>>k;
    ll total_time = 4*60-k;
    // cout<<total_time<<" ";
    if(total_time<=0)
        cout<<0;
    else{
        ll i=1;
        while(total_time-5*i>=0 && i<=n){
            total_time-=5*i;
            i++;
        }
        cout<<i-1;
    }
    return 0;
}