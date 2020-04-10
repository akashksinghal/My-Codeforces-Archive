#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N;
    cin>>N;
    bool A[10]={false};
    string str;
    cin>>str;
    for(auto i:str)
    {
        if(i=='L')
        {
            for(int j=0;j<10;j++)
                if(A[j]==false)
                {
                    A[j]=true;
                    break;
                }
        }
        else if(i=='R')
        {   
            for(int j=9;j>=0;j--)
                if(A[j]==false)
                {
                    A[j]=true;
                    break;
                }
        }
        else
        {
            A[i-'0']=false;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<A[i];
    }
    cout<<endl;
}
int main()
{
    fasino
    // freopen("input.txt", "r", stdin); 
    solve();
    return 0;
}