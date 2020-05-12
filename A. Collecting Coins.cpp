#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll a,b,c,s;
    cin>>a>>b>>c>>s;
    s+=(a+b+c);
    if(s%3)
        cout<<"NO\n";
    else
    {
        s/=3;
        if(a>s or b>s or c>s)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    
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