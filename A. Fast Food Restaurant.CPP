#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll N;
    cin>>N;
    vector<ll> A;
    ll B[1000];
    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=1;i<N-1;i++)
    {
        if(A[i-1]>A[i] && A[i]<A[i+1])
        {
            if(A[i-1]>=A[i+1])
            {
                A[i+1]=A[i]>A[i+1]?A[i+1]:A[i];
            }
            else
            {
                A[i-1]=A[i]>A[i-1]?A[i-1]:A[i];
            }
        }
    }
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase=1;
    //cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}