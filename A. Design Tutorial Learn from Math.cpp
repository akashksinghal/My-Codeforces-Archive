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
    if(n%2==0)
        cout<<4<<" "<<(n-4)<<"\n";
    else
    {
        cout<<9<<" "<<(n-9)<<"\n";
    }
    return 0;
}