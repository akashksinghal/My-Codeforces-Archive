// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    int n,m,sum = 0;
    cin>>n>>m;
    vector<int> A(n);
    for(auto &i:A) cin>>i;
    sort(A.begin(), A.end());
    for(int i=0;i<m;i++){
        if(A[i]>0) break;
        else sum+=A[i];
    }
    cout<<abs(sum);
    return 0;
}