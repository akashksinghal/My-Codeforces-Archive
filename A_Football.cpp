// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    map<string, int> mp;
    int n, mx = 0;
    string str;
    cin >> n;
    while (n--)
    {
        cin >> str;
        mp[str]++;
        mx = max(mp[str], mx);
    }
    for (auto i : mp)
    {
        if (i.second == mx)
        {
            cout << i.first;
            break;
        }
    }
    return 0;
}