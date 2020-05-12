#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    vector<ll> A(n);
    input(A,n);
    dsc(A);
    ll sum = 0, pr =0;
    for(auto i:A)
        sum+=i;
    sum/=2;
    ll i=0;
    while(pr<=sum)
    {
        pr+=A[i];
        i++;
    }
    cout<<i<<"\n";
    return 0;
}