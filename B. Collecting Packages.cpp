#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll n; string res = "";
    cin>>n;
    vector<pair<int, int> > A(n);
    for(int i=0;i<n;i++)
        cin>>A[i].first>>A[i].second;
    asc(A);
    ll x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(x>A[i].first || y>A[i].second)
        {
            cout<<"NO\n";
            return;
        }
        while(x<A[i].first)
        {
            res+="R";
            x++;
        }
        while(y<A[i].second)
        {
            res+="U";
            y++;
        }
    }
    cout<<"YES\n";
    cout<<res<<"\n";
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