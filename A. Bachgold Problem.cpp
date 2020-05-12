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
    ll n;
    cin>>n;
    if(n==2)
        cout<<1<<"\n"<<2;
    else if(n==3)
        cout<<1<<"\n"<<3;
    else{
        if(n&1){
            cout<<(n/2)<<"\n";
            for(int i=0;i<(n/2)-1;i++)
                cout<<2<<" ";
            cout<<3;
        }
        else{
            cout<<(n/2)<<"\n";
            for(int i=0;i<(n/2);i++)
                cout<<2<<" ";
        }
    }
    return 0;
}