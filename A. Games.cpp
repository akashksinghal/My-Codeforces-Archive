// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n,count=0;
    cin>>n;
    vector<pair<int,int> > A(n);
    for(int i=0;i<n;i++)
        cin>>A[i].first>>A[i].second;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(A[i].first==A[j].second)
                    count++;
            }
        }
    }
    cout<<count;
    return 0;
}