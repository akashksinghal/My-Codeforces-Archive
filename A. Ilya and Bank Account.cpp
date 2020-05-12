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
    string A;
    getline(cin,A);
    // cout<<str;
    if(A[0]!='-')
        cout<<A;
    else{
        string ans ="";
        for(ll i=0;i<A.size()-2;i++){
            ans+=A[i];
        }
        if(A[A.size()-1]<A[A.size()-2])
            ans+=A[A.size()-1];
        else
            ans+=A[A.size()-2];
        ll an = stol(ans);
        cout<<an;
    }
    return 0;
}