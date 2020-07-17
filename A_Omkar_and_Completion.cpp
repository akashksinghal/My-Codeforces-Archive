// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int n,j=1;
    cin>>n;
    vector<int> A;
    for(int i=1;i<n;i+=2){
        A.push_back(j);
        A.push_back(j);
        j+=2;
    }
    if(n&1) A.push_back(j);
    // cout<<A.size()<<" ";
    assert((int)A.size()==n);
    for(auto i:A) cout << i <<' ';
    cout<<'\n';
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}