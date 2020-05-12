// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i].first>>A[i].second;
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll s,n;
    cin>>s>>n;
    vector<pair<int,int> > A(n);
    input(A,n);
    asc(A);
    for(auto i:A){
        if(s>i.first)
            s+=i.second;
        else
        {
            cout<<"NO";return 0;
        }
    }
    cout<<"YES";
    return 0;
}