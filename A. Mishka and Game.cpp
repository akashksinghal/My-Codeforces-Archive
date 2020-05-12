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
    ll n, Mishika = 0, Chris = 0;
    cin>>n;
    for(ll i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a==b){
            Mishika++; Chris++;
        }
        else if(a>b){
            Mishika++;
        }
        else
            Chris++;
    }
    if(Mishika==Chris)
        cout<<"Friendship is magic!^^";
    else if(Mishika>Chris)
        cout<<"Mishka";
    else
        cout<<"Chris";
    return 0;
}