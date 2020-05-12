// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
ll smallestDivisor(ll n) 
{ 
    if (n % 2 == 0) 
        return 2; 
    for (ll i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
    return n; 
} 
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll m =  n + smallestDivisor(n);;
    ll divisor = smallestDivisor(n);
    // for(int i=1;i<=k;i++){
    //     n = n + smallestDivisor(n);
    //     cout<<n<<" ";
    // }
    cout<< m + 2*(k-1);
    cout<<"\n";
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}