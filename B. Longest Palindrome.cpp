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
    ll n,m;
    cin>>n>>m;
    vector<string> A(n);
    input(A,n);
    map<string, int> mp;
    for(auto i:A) mp[i]++;
    string ini = "", mid = "";
    for(auto i:mp){
        if(i.second==-10) continue;
        string rev(rbegin(i.first),rend(i.first));
        if(i.first==rev){
            mid = i.first;
            continue;
        }
        if(mp.find(rev)!=mp.end()){
            ini+=i.first;
            // i.second = -10;
            mp[rev] = -10;
        }
    }
    cout<<ini.length()*2 + mid.length()<<'\n';
    cout<<ini<<mid<<string(rbegin(ini),rend(ini));
    return 0;
}