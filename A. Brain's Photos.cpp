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
    int m,n;
    cin>>m>>n;
    char hi;
    bool flag = false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>hi;
            if(hi!='W' && hi!='B' && hi!='G'){
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
    return 0;
}