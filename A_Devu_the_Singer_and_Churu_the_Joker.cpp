// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
signed main()
{
    fasino
    ll n,d;
    cin>>n>>d;
    vector<ll> A(n);
    input(A);
    ll sum = 0;
    for(auto i:A) sum+=i;
    sum+=(A.size()-1)*10;
    if(sum<=d){
        cout<<(A.size()-1)*2 + max(0LL,(d-sum)/5);
    }
    else{
        cout<<-1;
    }
    return 0;
}