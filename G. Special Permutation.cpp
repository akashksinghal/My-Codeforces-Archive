// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    int n,j;
    cin>>n;
    if(n<4)
    {
        cout<<-1<<"\n";
        return;
    }
    if(n&1) j = n;
    else j = n-1;
    vector<int> A;
    while(j>=1){
        A.push_back(j);
        j-=2;
    }
    A.push_back(4);
    A.push_back(2);
    j = 6;
    while(j<=n){
        A.push_back(j);
        j+=2;
    }
    for(int i=0;i<A.size()-1;i++){
        int x = abs(A[i+1]-A[i]);
        assert(x>=2 && x<=4);
    }
    for(auto i : A) cout<<i<<" ";
    cout<<"\n";
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