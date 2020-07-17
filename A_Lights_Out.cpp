// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int A[5][5];
    memset(A,0,sizeof A);
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>A[i][j];
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            int cnt = A[i][j]+A[i-1][j]+A[i+1][j]+A[i][j-1]+A[i][j+1];
            if(cnt&1) cout<<0;
            else cout<<1;
        }
        cout<<'\n';
    }
    return 0;
}