// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    int n, openA=0, openB=0, a, b;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a>>b, openA+=a, openB+=b;
    cout<<min(openA,n-openA) + min(openB,n-openB);
    return 0;
}