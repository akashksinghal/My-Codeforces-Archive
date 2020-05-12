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
    ll n,a,b;
    cin>>n;
    cin>>a;
    set<int> st;
    for(int i=0;i<a;i++)
    {
        int x; cin>>x;
        st.insert(x);
    }
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x; cin>>x;
        st.insert(x);
    }
    if(st.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}