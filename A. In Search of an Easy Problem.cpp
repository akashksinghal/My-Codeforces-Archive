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
    ll n; bool ok = true;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x==1)
            ok = false;
    }   
    if (ok==false) cout<<"HARD"; else cout<<"EASY";
    return 0;
}