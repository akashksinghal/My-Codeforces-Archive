// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    string A;
    cin>>A;
    int rot = 0, ini = 0;
    for(auto i:A){
        int let = i-'a';
        // 1 2 3 4 5 6 7 8 9 10
        int k = abs(let-ini);
        int m = (26-ini) + let;
        int o = ini + (26-let);
        rot += min(k,min(m,o));
        ini = let;
    }    
    cout<<rot;
    return 0;
}