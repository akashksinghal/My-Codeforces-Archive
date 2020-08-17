// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1;
    }
    else{
        ll k = m/n, cnt = 0;
        while(k!=1){
            if(k%2==0){
                k/=2;
                cnt++;
            }
            else if(k%3==0){
                k/=3;
                cnt++;
            }
            else{
                cout<<-1;
                return 0;
            }
        }
        cout << cnt ;
    }
    return 0;
}