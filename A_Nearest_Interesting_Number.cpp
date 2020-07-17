// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
bool istrue(ll k){
    ll sum = 0;
    while (k)
    {
        sum+=k%10;
        k/=10;
    }
    return (sum%4==0);
}
signed main()
{
    fasino
    ll n;
    cin>>n;
    while(true){
        if(istrue(n)){
            break;   
        }
        n++;
    }
    cout<<n;
    return 0;
}