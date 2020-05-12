#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll a, b, n, S;
    cin >> a >> b >> n >> S;
    if (S - a * n >= 0)
    {
        if ((S - a * n) > b)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else
    {
        if ((S - (S / n) * n) > b)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}