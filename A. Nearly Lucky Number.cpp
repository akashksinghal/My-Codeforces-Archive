#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    string a; ll count = 0;
    cin>>a;
    for(char i:a)
        if(i=='4'||i=='7')
            count++;
    if(count==4 || count==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}