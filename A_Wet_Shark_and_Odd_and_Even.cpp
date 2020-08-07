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
    ll n,x;
    cin>>n;
    vector<ll> odd,even;
    for(ll i=0;i<n;i++){
        cin>>x;
        if(x&1){
            odd.push_back(x);
        }
        else even.push_back(x);
    }   
    ll sum = accumulate(even.begin(),even.end(),0LL);
    dsc(odd);
    if(odd.size()&1){
        for(ll i=0;i<odd.size()-1;i++){
            sum+=odd[i];
        }
    }
    else{
        for(ll i=0;i<odd.size();i++){
            sum+=odd[i];
        }
    }
    cout<<sum;
    return 0;
}