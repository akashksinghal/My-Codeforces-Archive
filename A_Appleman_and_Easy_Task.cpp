// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int n;
    cin>>n;
    char ch[n+2][n+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ch[i][j];
        }
    }
    for(int i=0;i<=n+1;i++){
        ch[0][i] = 'x';
        ch[i][0] = 'x';
    }
    for(int i=0;i<=n+1;i++){
        ch[n+1][i] = 'x';
        ch[i][n+1] = 'x';
    }
    // for(int i=0;i<=n+1;i++){
    //     for(int j=0;j<=n+1;j++){
    //         cout<<ch[i][j];
    //     }
    //     cout<<'\n';
    // }
    bool flag = true;
    for(int i=1;i<=n;i++){
        int k = 0;
        for(int j=1;j<=n;j++){
            if(ch[i+1][j]=='o') k++;
            if(ch[i][j+1]=='o') k++;
            if(ch[i-1][j]=='o') k++;
            if(ch[i][j-1]=='o') k++;
            if(k%2!=0) flag = false;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}