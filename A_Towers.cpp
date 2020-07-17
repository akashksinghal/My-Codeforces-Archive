// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    map<int,int> mp;
    int n,x,mx=0;
    cin>>n;
    while(n--){
        cin>>x;
        mp[x]++;
        mx = max(mx,mp[x]);
    }
    cout<<mx<<" "<<mp.size();
    return 0;
}