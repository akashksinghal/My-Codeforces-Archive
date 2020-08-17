// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int n, x, i, ans = 1;
    cin >> n >> x;
    vector<int> A(n);
    input(A);
    vector<int> mp(301,0);
    for(auto i:A) mp[i]++;
    for(i=1;i<=300;i++){
        if(x>=0 and mp[i]==0) {
            ans = i;
            x--;
        }
        else if(mp[i]){
            continue;
        }
        else break;
    } 
    cout << ans - 1 << '\n';
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