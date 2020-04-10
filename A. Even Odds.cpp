#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifdef AKS
    freopen("input.txt", "r", stdin); 
    #endif
    ll N,K;
    cin>>N>>K;
    if(K<=(N+1)/2)
        cout<<2*K-1<<endl;
    else
    {
        K -= ((N+1)/2);
        cout << 2*K << endl;
    }
    return 0;
}