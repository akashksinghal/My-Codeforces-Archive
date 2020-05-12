// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
pair<int,int> distinct(ll a)
{
    int digits = 0;
    set<int> A;
    while(a){
        A.insert(a%10);
        a/=10;
        digits++;
    }
    return {digits,A.size()};
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll a;
    cin>>a;
    ++a;
    while(true)
    {
        auto i = distinct(a);
        // cout<<a<<" :" << i.first<<" "<<i.second<<"\n";
        if(i.first==i.second)
        {
            cout<<a;    
            return 0;
        }
        // cout<<a<<" ";
        a++;
    }
    // cout<<a<<"\n";/
    return 0;
}