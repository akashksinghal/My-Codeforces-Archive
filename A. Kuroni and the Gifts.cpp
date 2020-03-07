#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N;
    cin>>N;
    vector<ll> A(N),B(N);
    input(A,N);
    input(B,N);
    ascend(A);
    ascend(B);
    for(ll i=0;i<N;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    for(ll i=0;i<N;i++)
        cout<<B[i]<<" ";
    cout<<endl;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("a_example.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}