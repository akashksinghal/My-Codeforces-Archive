// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    string A;
    cin>>A;
    int n = A.size(),i=n-1;
    sort(A.begin(),A.end());
    while(i>=0){
        if(A[i]==A[n-1])
            cout<<A[i];
        else break;
        i--;
    }
    return 0;
}