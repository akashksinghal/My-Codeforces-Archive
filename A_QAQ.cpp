// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    string A;
    cin>>A;
    int n = A.size();
    int ans= 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(A[i]=='Q' and A[j]=='A' and A[k]=='Q') ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}