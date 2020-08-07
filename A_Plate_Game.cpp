// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    ll a, b, r;
    cin >> a >> b >> r;
    if(2*r<=a and 2*r<=b)
        cout<<"First";
    else
        cout << "Second";
    return 0;
}