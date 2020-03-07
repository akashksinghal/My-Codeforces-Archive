#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N;
    cin>>N;
    string A;
    cin>>A;
    string result=A;
    ll k = 0;
    for(int i=0;i<(n-1-k+1);i++)
    {
        reverse(A.begin() + i, v.begin() + i+k-1);
        if(A<result)
        {
            result=A; 
            out = k+1;
        }
        k++;
    }
    cout<<result<<endl<<k<<endl;
    
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