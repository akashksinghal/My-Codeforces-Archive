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
    string s1;
    cin>>s1;
    vector<string> A(5);
    input(A,5);
    bool flag= false;
    for(auto i:A){
        if(i[0]==s1[0]||i[1]==s1[1])
            flag = true;
    }
    cout<<((flag)?"YES":"NO");
    return 0;
}