#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int A[4];
    for(int i=0;i<4;i++)
        cin>>A[i];
    sort(A,A+4);
    cout<<A[3]-A[0]<<" "<<A[3]-A[1]<<" "<<A[3]-A[2]<<endl;
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