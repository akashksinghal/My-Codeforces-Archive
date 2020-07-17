// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,tmp;
    cin>>n;
    while(n>1){
        cout<<n<<" ";
        tmp = n;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                tmp = i;
                break;
            }
        }
        n/=tmp;
    }
    cout<<1;
    return 0;
}