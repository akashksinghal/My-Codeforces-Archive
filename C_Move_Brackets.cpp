// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin>>n;
    string A;
    cin>>A;
    stack<char> st;
    for(auto i:A){
        if(st.empty()){
            st.push(i);
        }
        else{
            if(i==')' and st.top()=='('){
                st.pop();
            }
            else if(i=='('){
                st.push(i);
            }
            else{
                st.push(i);
            }
        }
    }
    ll op = 0, cl = 0;
    while(!st.empty()){
        char ch = st.top();
        st.pop();
        ch==')'?cl++:op++;
    }
    cout<<min(op,cl)<<'\n';
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}