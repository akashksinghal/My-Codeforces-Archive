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
    int n,m,ans = 0;
    cin>>n>>m;
    while(true){
        if(n!=0){
            ans++;
            n--;
            if(ans%m==0) n++;
        }
        else{
            break;
        }
    }
    cout<<ans;
    return 0;
}