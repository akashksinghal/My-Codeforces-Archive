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
    string A;
    cin>>A;
    int n = A.size();
    int pref[n+1]={0};
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1] and i+1<n){
            pref[i]=pref[i-1]+1;
        }
        else pref[i]=pref[i-1];
    }
    for(auto i:pref) cout<<i<<" ";
    cout<<'\n';
    int m,l,r;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>l>>r;
        if(l-2<0){
            cout<<pref[r-2]<<'\n';
        }
        else
            cout<<pref[r-2]-pref[l-2]<<'\n';
    }
    return 0;
}