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
    int N,T;
    string A;
    cin>>N>>T;
    cin>>A;
    while(T--)
    {
        for(int i=0;i<N-1;i++)
            if(A[i]=='B'&&A[i+1]=='G')
            {
                A[i]='G';
                A[i+1]='B';
                i++;
            }
    }
    cout<<A<<'\n';
    return 0;
}