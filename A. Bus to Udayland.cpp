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
    int n; bool flag = false;
    cin>>n;
    string A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        if((A[i][0]=='O' && A[i][1]=='O' && flag == false)){
            A[i][0]='+';
            A[i][1]='+';
            flag = true;
        }
        if(flag) break;
        if((A[i][3]=='O' && A[i][4]=='O' && flag == false)){
            A[i][4]='+';
            A[i][3]='+';
            flag = true;
        }
        if(flag) break;
    }
    if(flag) 
    {
        cout<<"YES\n";
        for(auto i:A){
            cout<<i<<"\n";
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}