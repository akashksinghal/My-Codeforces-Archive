// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,k=0,m=0;
    cin>>n;
    vector<ll> A(n);
    input(A);
    asc(A);
    for(auto i:A){
        if(i==A[0]) k++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(A[i]==A[n-1]) m++;
        else break;
    }
    cout<<(A[n-1]-A[0])<<" ";
    if((A[n-1]-A[0])==0)
        cout<<n*(n-1)/2;
    else
        cout<<m*k;
    return 0;
}