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
    int n,m;
    cin>>n>>m;
    if(n==m){
        cout<<0;
    }
    else if(n>m){
        cout<<abs(n-m);
    }
    else{
        int ans = 0;
        while (n<m) {
            if (m%2==0) m/=2;
            else m++;
            ans++;
        }
        cout<<abs(ans+n-m);
    }
    return 0;
}