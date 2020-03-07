#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    vector<int> A;
    A.push_back(x*b);
    A.push_back(y*a);
    A.push_back((b-y-1)*(a));
    A.push_back((b)*(a-x-1));
    sort(A.begin(),A.end());
    cout<<A[A.size()-1]<<endl;
    A.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //#ifdef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","r",stdout);
    //#endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}