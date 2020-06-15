// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<a.second;
}
#define asc(A,cmp) sort(A.begin(),A.end(),cmp)
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    vector<int> A(n), B(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>A[i]>>B[i];
        mp[A[i]]=B[i];
    }
    int prev = 0; bool flag = false;
    for(auto i:mp){
        // cout<<i.first<<" "<<i.second<<'\n';
        if(i.second<prev){
            flag = true;
            break;
        }
        prev = i.second;
    }
    if(flag) cout<<"Happy Alex";
    else cout<<"Poor Alex";
    return 0;
}