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
    int n; cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                A[i][j]=1;
            }
            else{
                A[i][j]=A[i-1][j]+A[i][j-1];
            }
        }
    }
    cout<<A[n-1][n-1];
    return 0;
}