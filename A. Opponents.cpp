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
    int n,d,maxi=0,ans=0;
    string str;
    cin>>n>>d;
    for(int i=0;i<d;i++){
        cin>>str;
        bool chk=false;
        for(int j=0;j<n;j++){
            if(str[j]=='0') chk = true;
        }
        if(chk) maxi++;
        else maxi = 0;
        ans = max(maxi,ans);
    }
    cout<<ans;
}