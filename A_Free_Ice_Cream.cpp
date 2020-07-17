// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    ll n, ini, k, fault = 0;
    char ch;
    cin >> n >> ini;
    while (n--)
    {
        cin >> ch >> k;
        if (ch == '+')
            ini += k;
        else if (ch == '-')
        {
            if (ini >= k)
            {
                ini -= k;
            }
            else
            {
                fault++;
            }
        }
    }
    cout << ini << " " << fault;
    return 0;
}