// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
ll res(ll n){
    ll sum = 0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    ll i=1;
    while(n){
        i++;
        if(res(i)==10){
            n--;
        }
    }
    cout<<i<<"\n";
    return 0;
}