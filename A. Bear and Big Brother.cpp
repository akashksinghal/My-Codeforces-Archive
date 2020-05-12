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
    int a,b;
    cin>>a>>b;
    int years = 0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        years++;
    }
    cout<<years<<"\n";
    return 0;
}