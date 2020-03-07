#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m;
    cin>>n>>m;
    string A;
    cin>>A;
    vector<ll> check;
    for(ll i=0;i<m;i++)
    {
        ll temp;
        cin>>temp;
        check.push_back(temp);
    } 
    check.push_back(A.size());
    ll DP[n+1][26]={0};
    for(ll i=0;i<A.size();i++)
    {
        if(i>0)
            for(int j=0;j<26;j++)
            {
                DP[i][j]+=DP[i-1][j];
            }
        DP[i][A[i]-'a']++;
    }
    ll ANS[26]={0};
    //cout<<check.size()<<endl;
    for(ll i=0;i<check.size();i++)
    {
    //    cout<<check[i]<<" ";
        for(int j=0;j<26;j++)
            ANS[j]+=DP[check[i]-1][j];
    }
    //cout<<endl;
    // for(ll i=0;i<A.size();i++)
    // {
    //     cout<<i<<": ";
    //     for(int j=0;j<26;j++)
    //     {
    //         cout<<DP[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<"*: ";
    for(int i=0;i<26;i++)
    {
        cout<<ANS[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("a_example.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}