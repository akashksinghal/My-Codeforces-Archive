//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int n;
    cin >> n;
    vector<int> A(n);
    input(A);
    vector<int> ans;
    set<int> st;
    for(int i=n-1;i>=0;i--){
        if(st.find(A[i])==st.end()){
            ans.push_back(A[i]);
            st.insert(A[i]);
        }
    }
    cout << st.size() << '\n';
    for(int j=ans.size()-1;j>=0;j--) cout << ans[j] << ' ';
    return 0;
}