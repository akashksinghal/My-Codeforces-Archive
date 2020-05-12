// I'm a f*cking looser
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define asc(A) sort(A.begin(), A.end())
#define dsc(A) sort(A.begin(), A.end(), greater<ll>())
#define input(A, N)            \
    for (ll i = 0; i < N; i++) \
        cin >> A[i];
int main()
{
    fasino
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
#endif
    ll n;
    cin >> n;
    // int arr[] = {8, 4, 2, 6, 8, 4, 2, 6, 8, 4};
    if(n==0)
        cout<<1;
    else
    switch (n%4)
    {
    case 0:
        cout<<6;
        break;
    case 1:
        cout<<8;
        break;
    case 2:
        cout<<4;
        break;
    case 3:
        cout<<2;
        break;
    
    default:
        break;
    }
    return 0;
}