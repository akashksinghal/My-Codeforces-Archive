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
    int a,b,c;
    cin>>a>>b>>c;
    // cout<<a<<b<<c;
    vector<int> A;
    A.push_back(a+b+c);
    A.push_back((a+b)*c);
    A.push_back(a*(b+c));
    A.push_back(a*b*c);
    A.push_back((a*b)+c);
    A.push_back(a+(b*c));
    dsc(A);
    cout<<A[0];
    return 0;
}