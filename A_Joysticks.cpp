// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll a,b,ans = 0;
    cin>>a>>b;
    while(a!=0 and b!=0){
        if(a==1 and b==1) break;
        ans++;
        if(a<b) swap(a,b);
        a = max(0LL, a-2); b++;
    }
    cout<<ans;
    return 0;
}