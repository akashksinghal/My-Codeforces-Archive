// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    vector<int> A[2];
    for(int i=1;i<=n;i++)
    {
        ll tm;cin>>tm;
        A[tm%2].push_back(i);
    }
    if(A[0].size()==1)
        cout<<A[0][0];
    else
        cout<<A[1][0];
    return 0;
}