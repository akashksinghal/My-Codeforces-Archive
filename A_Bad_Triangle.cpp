// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A);
    asc(A);
    if(A[0] + A[1] <= A[n-1])
        cout << 1 << " " << 2 << " " << n << '\n';
    else cout << -1 << '\n';
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