// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int n,m;
    cin>>n>>m;
    char ch[n][m];
    set<pair<int,int>> rw;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='S') rw.insert({i,j});
        }
    }
    bool ans[n][m];
    memset(ans,false,sizeof ans);
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<m;j++){
            if(rw.find({i,j})!=rw.end()){
                flag = false;
            }
        }
        if(flag){
            for(int j=0;j<m;j++){
                ans[i][j] = true;
            }
        }
    }
    for(int j=0;j<m;j++){
        bool flag = true;
        for(int i=0;i<n;i++){
            if(rw.find({i,j})!=rw.end()){
                flag = false;
            }
        }
        if(flag){
            for(int i=0;i<n;i++){
                ans[i][j] = true;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << ans[i][j] << ' ';
            if (ans[i][j] == true)
                res++;
        }
        // cout << '\n';
    }
    cout<<res;
    return 0;
}