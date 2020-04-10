#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef AKS
    freopen("input.txt", "r", stdin); 
    #endif
    ll N;
    cin>>N;
    vector<string> A(N);
    input(A,N);
    int count = 0;
    for(int i=1;i<N;i++)
    {
        // cout<<A[i]<<" ";
        if(A[i]!=A[i-1])
        {
            count++;
            // cout<<i<<" ";
        }
    }
    cout<<++count<<endl;
    return 0;
}