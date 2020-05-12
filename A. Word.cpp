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
    string A;
    int up = 0, dn = 0;
    cin>>A;
    for(auto i:A)
        if(i>='a'&&i<='z')
            dn++;
        else if(i>='A'&& i<='Z')
            up++;   
    // cout<<up<<" "<<dn<<" ";
    if(up>dn)
    {
        for(auto i:A)
            if(i>='a'&& i<='z')
                cout<<char(i-32);
            else
                cout<<i;
    }
    else
    {
        for(auto i:A)
            if(i>='A'&& i<='Z')
                cout<<char(i+32);
            else
                cout<<i;
    }
    return 0;
}