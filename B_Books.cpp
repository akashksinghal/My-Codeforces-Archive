// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, t, j = 0 , ans = 0;
    cin >> n >> t;
    vector<ll> A(n);
    input(A);
    for (int i = 0,sum = 0; i < n; i++)
    {
        while(j<n and sum + A[j]<=t){
            sum+=A[j++];
        }
        ans = max(ans,abs(j-i));
        sum-=A[i];
    }
    cout << ans;
    return 0;
}