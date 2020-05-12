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
    int n; cin>>n;
    vector<int> A(n);
    input(A,n);
    map<int,vector<int> > ap;
    // ap[1]=0;ap[2]=0;ap[3]=0;
    for(int i=0;i<n;i++){
        ap[A[i]].push_back(i+1);
    }
    int mini = min(ap[1].size(),min(ap[2].size(),ap[3].size()));
    cout<<mini<<"\n";
    for(int i=0;i<mini;i++){
        cout<<ap[1][i]<<" "<<ap[2][i]<<" "<<ap[3][i]<<"\n";
    }
    return 0;
}