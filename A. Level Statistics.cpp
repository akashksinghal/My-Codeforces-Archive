#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N;
    cin>>N;
    int A[1000],B[1000];
    for(int i=0;i<N;i++)
        cin>>A[i]>>B[i];
    for(int i=0;i<N;i++)
    {
        if(i!=0)
        {
            if(A[i]<A[i-1] || B[i]<B[i-1] || A[i]<B[i])
            {
                cout<<"NO\n";
                return;
            }
            if((A[i]-A[i-1])<(B[i]-B[i-1]))
            {
                cout<<"NO\n";
                return;
            }

        }
        if(i==0)
        {
            if(A[i]<B[i])
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
    return;
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