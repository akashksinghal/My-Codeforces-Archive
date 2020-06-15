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
    ll n,m;
    cin>>n>>m;
    // k is the variable to check number of occurances of multiple of m from 1 to n
    ll k = n/m;
    vector<int> digits(10);
    // Digits is to calculate the ones digits of m from m*1 to m*10
    for(int i=0;i<9;i++){
        digits[i] = ((i+1)*m)%10;
    }
    // Since k can be greater than 10
    // Thus we multiple k/10 with sum of all the digits 
    // and add sum of k%10 digits from 0 to k%10
    ll sum = 0;
    for(int i=0;i<k%10;i++){
        sum+=digits[i];
    }
    sum += (k/10)*(accumulate(digits.begin(),digits.end(),0LL));
    cout<<sum<<'\n';
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