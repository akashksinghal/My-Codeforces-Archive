// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(a1==a2){
        cout<<a1<<" "<<a2+1<<'\n';
    }
    else{
        cout<<a1<<' '<<a2<<"\n";
    }
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