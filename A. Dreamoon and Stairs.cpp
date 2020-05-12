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
    ll a,b,tm;
    cin>>a>>b;
    if(a<b){
        cout<<-1;
        return 0;
    }
    if(a&1) tm = (a/2)+1; 
    else    tm = a/2;
    if(tm%b==0){
        cout<<tm;
    }
    else{
        cout<<((tm/b)+1)*b;
    }
    return 0;
}