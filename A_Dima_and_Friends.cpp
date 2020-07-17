// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int n,x,ans=0,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x; sum+=x;
    }
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1) ans++;
    } 
    cout<<ans;
    return 0;
}