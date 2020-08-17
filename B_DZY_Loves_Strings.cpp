// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    string A;
    cin>> A;
    ll k,maxi = 0, ans = 0;
    cin>>k;
    map<char,int> mp;
    char op;
    for(int i=0;i<26;i++){
        int ko; cin >> ko;
        mp['a'+i] = ko;
        if(i==0) op = 'a', maxi = mp['a'+i];
        else{
            if(maxi<mp['a'+i]){
                op=('a'+i);
                maxi = mp['a'+i];
            }
        }
    }
    string res(k,op);
    string jo = A + res;
    for(int i=0;i<jo.size();i++){
        ans += (i+1)*mp[jo[i]];
    }
    cout << ans;
    return 0;
}