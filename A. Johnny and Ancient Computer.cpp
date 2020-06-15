// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i]; 
set<ll> an;
void ch(){
    for(int i=1;i<=65;i++){
        an.insert(pow(2,i));
    }
    an.erase(0);
}
void solve()
{
    unsigned long long int a,b;
    cin>>a>>b;
    if(a==b){
            cout<<0<<'\n';
    }
    else if(an.find(a/b)!=an.end() and a%b==0){
        ll m = log2l(a/b);
        ll ans = m/3;
        m -= (m/3)*3;
        ans += m/2;
        m -= (m/2)*2;
        ans += m;
        cout<<ans<<'\n';
    }
    else if(an.find(b/a)!=an.end() and b%a==0){
        ll m = log2l(b/a);
        ll ans = m/3;
        m -= (m/3)*3;
        ans += m/2;
        m -= (m/2)*2;
        ans += m;
        cout<<ans<<'\n';
    }
    else
    {
        cout<<-1<<'\n';
    }
}

int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ch();
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}