// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    if(n==2){
        cout<<2;
    }
    else{
        if(n&1) cout<<1;
        else cout<<0;
    }
    cout<<'\n';
}
int main()
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