#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    int n,k,n1;
    cin>>n>>k>>n1;
    if(pow(ceil(n/n1),2)<=k)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    fasino
    freopen("input.txt", "r", stdin); 
    solve();
    return 0;
}