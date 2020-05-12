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
    int n,t;
    cin>>n>>t;
    if(t==10 && n==1){
        cout<<-1;
    }
    else{
        if(t==10){
            cout<<1;
            for(int i=1;i<n;i++){
                cout<<"0";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<t;
            }
        }
    }
    return 0;
}