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
    int n,m,res = 0;
    cin>>n;
    vector<int> A(n);
    input(A,n);
    cin>>m;
    vector<int> B(m);
    input(B,m);
    asc(A); asc(B);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(A[i]-B[j])<=1){
                B[j]=1000;
                res++;
                break;
            }
        }
    }
    cout<<res;
    return 0;
}