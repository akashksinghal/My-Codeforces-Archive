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
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int k = s*v1 + 2*t1;
    int m = s*v2 + 2*t2;
    // cout<<k<<" "<<m<<" ";
    if(m==k) cout<<"Friendship";
    else if(k<m) cout<<"First";
    else cout<<"Second";
    return 0;
}