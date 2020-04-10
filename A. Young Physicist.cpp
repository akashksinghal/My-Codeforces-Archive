#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifdef AKS
    freopen("input.txt", "r", stdin); 
    #endif
    ll N;
    cin>>N;
    int s1=0,s2=0,s3=0,x,y,z;
    for(int i=0;i<N;i++)
    {
        cin>>x>>y>>z;
        s1+=x;
        s2+=y;
        s3+=z;
    }
    if(s1==0 && s2==0 && s3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}