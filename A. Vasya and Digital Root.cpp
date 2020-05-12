#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll d,k;
    cin>>k>>d;
    if(d==0 and k>1)
        cout<<"No solution\n";
    else
    {
        cout<<d;
        for(ll i=1;i<=k-1;i++)
            cout<<0;
        cout<<"\n";
    }    
    return 0;
}