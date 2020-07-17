// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    int n;
    cin>>n;
    string A;
    cin>>A;
    int fin = 0;
    map<string,int> mp;
    for(int i=0;i<n-1;i++){
        string k = "";
        k += A[i];k+=A[i+1];    
        mp[k]++;
        fin = max(fin,mp[k]);
    }
    for(auto i:mp) if(i.second==fin){cout<<i.first; break;}
    return 0;
}