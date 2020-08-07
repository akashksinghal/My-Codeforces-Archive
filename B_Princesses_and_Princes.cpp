// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n,k,l,ans = -1;
    cin >> n;
    vector<bool> unmarried_ladka(n+1,false);
    for(int i=1;i<=n;i++){
        cin>>k;
        bool flag = false;
        for(int j=0;j<k;j++){
            cin>>l;
            if(flag or unmarried_ladka[l]) continue;
            if(unmarried_ladka[l]==false){
                unmarried_ladka[l] = true;
                flag = true;
            }
        }
        if(flag==false){
            ans = i;
        }
    }
    if(ans == -1){
        cout<<"OPTIMAL\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(!unmarried_ladka[i]){
            k = i;
            break;
        }
    }
    cout<<"IMPROVE\n"<<ans<<' '<<k<<'\n';
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