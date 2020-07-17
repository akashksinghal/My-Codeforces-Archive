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
    map<char,int> mp;
    for(auto i:A) mp[i]++;
    for(int i=0;i<mp['n'];i++) cout<<1<<' ';
    for(int i=0;i<mp['z'];i++) cout<<0<<' ';
    return 0;
}