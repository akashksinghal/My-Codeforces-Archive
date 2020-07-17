// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, cnt = 2, ans = 2;
    cin>>n;
    vector<ll> A(n);
    input(A);
    for(int i=2;i<n;i++){
        cnt++;
        if(A[i]!=A[i-1]+A[i-2]) cnt = 2;
        ans = max(cnt,ans);
    }
    cout<<min(ans,n);
    return 0;
}