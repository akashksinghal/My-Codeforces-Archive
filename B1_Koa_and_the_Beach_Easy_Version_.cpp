// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int n,k,l, t = 0;
    cin>>n>>k>>l;
    vector<ll> A(n+1);
    for(int i=1;i<=n;i++) cin>>A[i];
    vector<int> ko;
    for(int i=0;i<=k;i++){
        ko.push_back(i);
    }
    for(int i=k-1;i>=1;i--){
        ko.push_back(i);
    }
    for(int i=1;i<=n;i++){
        set<int> ok;
        int dep = A[i] + ko[(t++)%(2*k)];
        // cout<<dep<<'\n';
        while(dep>l){
            ok.insert(dep);
            // cout<<t<<" "<<dep<<'\n';
            dep = A[i] + ko[(t++)%(2*k)];
            if(ok.find(dep)!=ok.end()){
                cout<<"No\n";
                return;
            }
        }
        cout<<dep<<' ';
    }
    cout<<"Yes\n";
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