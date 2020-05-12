// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    string a,b;
    cin>>a>>b;
    // string c = "";
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]=='1'&&b[i]=='1')
            cout<<0;
        else if(a[i]=='0' && b[i]=='0')
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}