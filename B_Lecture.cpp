// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int n,m;
    cin>>n>>m;
    string a,b;
    map<string,string> mp;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        if(a.size()<=b.size()){
            mp[a]=a;
            mp[b]=a;
        }
        else{
            mp[a] = b;
            mp[b] = b;
        }
    }
    for(int i=1;i<=n;i++){
        cin>>b;
        cout<<mp[b]<<' ';
    }
    return 0;
}