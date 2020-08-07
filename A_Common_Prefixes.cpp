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
    vector<ll> A(n);
    input(A);
    vector<string> ans;
    ans.push_back(string(50,'a'));
    for(ll i=0;i<n;i++){
        string ko = ans.back();
        char ch = ko[A[i]]+1;
        if(ch>'z' or ch<'a') ch = 'f';
        for(int j = A[i];j<50;j++){
            ko[j] = ch++;
            if(ch>'z' or ch<'a') ch = 'h';
        }
        ans.push_back(ko);
    }
    for(auto i:ans) cout<<i<<'\n';
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