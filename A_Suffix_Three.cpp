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
    ll n = A.size();
    if (A[n - 1] == 'o')
        cout << "FILIPINO";
    else if (A[n - 1] == 'u')
        cout << "JAPANESE";
    else
        cout << "KOREAN";
    cout << '\n';
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