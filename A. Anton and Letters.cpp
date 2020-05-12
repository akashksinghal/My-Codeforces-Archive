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
    set<char> st; 
    getline(cin,A);
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>='a' && A[i]<='z')
            st.insert(A[i]);
    }
    cout<<st.size();
    return 0;
}