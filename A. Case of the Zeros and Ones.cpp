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
    int n,zero = 0, one = 0; cin>>n;
    string a; cin>>a;
    asc(a);
    for(auto i:a){
        if(i=='0') zero++;
        else one++;
    }
    cout<<n-(min(one,zero)*2);
    return 0;
}