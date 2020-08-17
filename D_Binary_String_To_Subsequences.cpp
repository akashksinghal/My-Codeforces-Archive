// I'm a f*cking looser
// UNSOLVED, THIS IS A TLE SOLUTION
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, sub = 1;
    cin>>n;
    string A;
    cin>>A;
    vector<ll> ans(n,0);
    vector<bool> marked(n, false);
    ll cnt = 0;
    while(cnt!=n){
        bool start = false; ll pre = 0;
        for(ll i=0;i<n;i++){
            if(start and !marked[i]){
                int k = (A[i] == '1') ? 1 : 0;
                if(k==(1-pre)){
                    pre = (A[i] == '1') ? 1 : 0;
                    ans[i] = sub;
                    marked[i]= true;
                    cnt++;
                }
            }
            else if(!start and !marked[i])
            {
                pre = (A[i] == '1') ? 1 : 0;
                ans[i] = sub;
                marked[i]= true;
                start = true;
                cnt++;
            }
        }
        sub++;
    }
    cout << sub - 1 <<'\n';
    for(auto i:ans) cout<< i <<' ';
    cout<<'\n';
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