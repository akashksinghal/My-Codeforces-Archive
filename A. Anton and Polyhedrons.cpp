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
    map<string,int> A;
    A["Tetrahedron"]=4;
    A["Cube"]=6; 
    A["Octahedron"]=8;
    A["Dodecahedron"]=12;
    A["Icosahedron"]=20;
    string tm;
    int n; ll sum =0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tm;
        sum+=A[tm];
    }
    cout<<sum;
    return 0;
}