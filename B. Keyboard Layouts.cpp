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
    string A,B,C;
    cin>>A>>B>>C;
    // cout<<A<<" "<<B<<" "<<C; 
    map<char,char> fn;
    for(int i=0;i<26;i++){
        fn[A[i]]=B[i];
        fn[A[i]-32]=B[i]-32;
    }
    for(auto i:C){
        if(i>='0'&&i<='9')
            cout<<i;
        else
            cout<<fn[i];
    }
    return 0;
}