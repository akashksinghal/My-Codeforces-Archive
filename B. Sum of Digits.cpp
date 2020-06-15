// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    string A;
    cin>>A;
    int ans = 0;
    while(true and A.size()!=1){
        ll sumofDigit = 0;
        for(auto i:A) sumofDigit+=(i-'0');
        A = to_string(sumofDigit);
        ans++;
        if(sumofDigit>=0 && sumofDigit<=9) break;
    }
    cout<<ans;
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase=1;
    // cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}