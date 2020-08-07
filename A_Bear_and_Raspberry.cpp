// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,c;
    cin >> n >> c;
    ll maxi = 0;
    vector<ll> A(n);
    input(A);
    for (ll i = 1; i < n; i++){
        // maxi=max(maxi,A[i-1]-A[i]-c); Before CoronaVirus 
        maxi = max(maxi, A[i-1] - A[i] - c); // Maintain Social Distancing
    }
    cout << maxi;
    return 0;
}