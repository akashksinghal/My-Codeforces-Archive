#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    string A;
    cin>>A;
    set<char> st;
    for(auto i:A)
        st.insert(i);
    if(st.size()&1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}