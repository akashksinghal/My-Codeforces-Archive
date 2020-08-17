// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll r,g,b,w,cnt = 0;
    cin >> r >> g >> b >> w;
    cnt = (r&1) + (g&1) + (b&1) + (w&1);
    if(cnt<=1){
        cout << "Yes\n"; return;
    }
    if(r>0 and b>0 and g>0){ 
        cnt = ((r-1)&1) + ((g-1)&1) + ((b-1)&1) + ((w+3)&1);
        if(cnt<=1){ cout <<"Yes\n"; return;}
    }
    cout << "No\n";
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}