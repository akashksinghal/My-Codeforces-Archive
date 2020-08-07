// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    string A;
    cin >> A;
    ll ans = 0;
    vector<ll> ve((int)A.size(),0);
    for(int i=0;i<(int)A.size();i++){
        if(i==0 and A[i]=='L'){
            ve[i]=1;
        }
        else{
            if(A[i]=='L'){
                ve[i] = ve[i-1]+1;
            }
        }
        ans = max(ans,ve[i]);
    }
    cout << ans + 1 << '\n';
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}