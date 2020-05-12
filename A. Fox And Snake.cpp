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
    ll n,m,k=1;
    cin>>n>>m;
    string a = "", b ="#", c="";
    for(int i=0;i<m;i++)
        a+="#";
    for(int i=0;i<m-1;i++)
        c+=".";
    for(int i=0;i<n;i++)
        if(i%2==0)
            cout<<a<<"\n";
        else
        {
            if(k&1)
                cout<<c<<b<<"\n";
            else
                cout<<b<<c<<"\n";
            k++;
        }
    return 0;
}