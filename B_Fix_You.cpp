// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n,m, cnt = 0;
    cin >> n >> m;
    char A[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>A[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(A[i][j]=='D' and i==n and j!=m) cnt++;
            if(A[i][j]=='R' and j==m and i!=n) cnt++;
        }
    }
    cout << cnt <<'\n';
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