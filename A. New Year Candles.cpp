// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int a,b;
    cin>>a>>b;
    int ans = a;
    while(a>=b){
        ans+=(int)(a/b);
        a = a/b + (a-(int(a/b)*b));
        // cout<<a<<" ";
    }
    cout<<ans;
    return 0;
}