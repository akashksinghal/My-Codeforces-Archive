// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    ll n, m = 4;
    cin>>n;
    ll A[101];
    A[0]=0;
    A[1]=1;
    for (ll i = 2; i <= n; i++)
        A[i] = A[i - 1] + m,m+=4;
    cout<<A[n];
    return 0;
}