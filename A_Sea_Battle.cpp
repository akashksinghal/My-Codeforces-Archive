// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << 2 * (w1 + h1 + h2) + 4;
    return 0;
}