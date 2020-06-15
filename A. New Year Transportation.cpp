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
    ll n,index;
    cin>>n>>index;
    vector<int> A(n);
    for(int i=1;i<n;i++) cin>>A[i];
    int k;
    for(k=1;k<n;){
        // cout<<k<<" ";
        if(k==index) {cout<<"YES\n"; return 0;}
        k = k + A[k];
    }
    if(k==index){
        cout<<"YES\n"; return 0;
    }
    cout<<"NO\n";
    return 0;
}