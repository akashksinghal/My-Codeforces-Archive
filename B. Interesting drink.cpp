// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
vector<ll> A;
ll n;
ll ans(ll val){
    ll low = 0, high = n-1,res = 0;
    while(low<=high){
        ll mid = low + (high-low)/2;
        if(A[mid]<=val){
            low = mid + 1;
            res = mid + 1;
        }
        else{
            high = mid - 1; 
        }
    }
    return res;
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    cin>>n;
    A.resize(n);
    input(A,n); asc(A);
    for(auto i:A){
        cout<<i<<" ";
    }
    cout<<"\n";
    ll q,tmp;
    cin>>q;
    for(ll i=0;i<q;i++){
        cin>>tmp;
        cout<<ans(tmp)<<"\n";
    }
    return 0;
}