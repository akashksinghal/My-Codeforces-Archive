#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    string A;
    cin>>A;
    for(auto i:A)
    {
        if(i=='H' || i=='9'||i=='Q')
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    fasino
    #ifdef AKS
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase=1;
    // cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}