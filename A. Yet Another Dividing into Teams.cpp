#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N;
    cin>>N;
    vector<ll> A(N);
    input(A,N);
    asc(A);
    int res = 0;
    for(int i=0;i<N-1;i++)
        if(A[i+1]-A[i]==1)
            res=1;
    cout<< 1 + res << "\n";
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