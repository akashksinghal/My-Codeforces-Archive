#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forIN(i,n) for(int i=0;i<n;i++)
void solve()
{
    vector<int> A,B;
    bool P[1000]={false}
    int N,M;
    cin>>N,M;
    forIN(0,N)
    {
        int temp;
        cin>>temp;
        A.push_back(A);
    }
    forIN(0,M)
    {
        int temp;
        cin>>temp;
        B.push_back(temp);
        B[i]--;
    }
    sort(B.begin(),B.end());
    
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