// I'm a f*cking looser
// UN_SOLVED / IMCOMPLETE / ERRORS_FOUND / FAILED-TEST-CASES
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll findLargestOddDivisor(ll n){
    while(n % 2 == 0){
        n >>= 1;
    }
    return n;
}
void solve()
{
    ll n;
    cin>>n;
    ll ans = 0;
    string A[]={"FastestFinger","Ashishgup"};
    while(n!=1){
        ll k = findLargestOddDivisor(n);
        if(k!=1 and k>1){
            n/=k;
        }
        else{
            n--;
        }
        ans++;
    }
    assert(n==1);
    cout<<A[ans%2]<<'\n';
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