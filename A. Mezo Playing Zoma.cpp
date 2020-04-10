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
    int li=0,ri=0;
    for(auto i:A){
        if(i=='L')
            li++;
        else
        {
            ri++;
        }
    }
    cout<<li+ri+1<<endl;
}
int main()
{
    fasino
    #ifdef AKS
    freopen("a_example.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}