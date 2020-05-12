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
    string a,c ="";
    cin>>a;
    for(ll i=0;i<a.size();i++)
    {
        if(a.substr(i,3)=="WUB")
        {
            i+=2;
            // c+=" ";
        }
        else
        {
            c+=a[i];
            if(a.substr(i+1,3)=="WUB")
                c+=" ";
        }
    }
    cout<<c;
    return 0;
}