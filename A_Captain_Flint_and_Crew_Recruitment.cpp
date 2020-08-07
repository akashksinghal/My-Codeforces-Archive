// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin>>n;
    if(n<=30){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        if(n==36 || n==40 || n==44){
            cout << "6 10 15 " << n - 31 << '\n';
        }
        else{
            cout << "6 10 14 " << n - 30 << '\n';
        }
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