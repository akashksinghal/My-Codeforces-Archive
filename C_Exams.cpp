// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, best = 0;
    cin >> n;
    vector<pair<ll, ll>> A(n);
    for (auto &i : A)
        cin >> i.first >> i.second;
    sort(A.begin(), A.end());
    for (ll i = 0; i < n; i++) {
        if (best <= A[i].second)
            best = A[i].second;
        else
            best = A[i].first;
    }
    cout<<best;
    return 0;
}