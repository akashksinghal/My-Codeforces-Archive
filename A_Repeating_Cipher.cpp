// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    int n;
    cin >> n;
    string ans = "", str;
    cin>>str;
    int i=0, j=1;
    while(i<n){
        ans += str[i];
        i+=j;
        j++;
    }
    cout<<ans;
    return 0;
}