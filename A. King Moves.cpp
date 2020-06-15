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
    char a;
    int A;
    cin>>a>>A;
    if((a=='a' and (A == 1 or A == 8)) or (a=='h' and (A == 1 or A == 8))) cout<<3;
    else if(a=='a' or a=='h' or A==1 or A==8) cout<<5;
    else cout<<8;
    return 0;
}