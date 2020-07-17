// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll m = c*d, ko = k*l/nl;
    cout<<min({ko,m,p/np})/n;
    return 0;
}