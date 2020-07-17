// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    int n,d,i=1,k=0;
    cin>>n>>d;
    string A;
    cin>>A;
    while(i<n){
        bool flag = false;
        int m = d;
        while(m>0){
            while(i+m-1>n)m--;
            if(A[i+m-1]=='1'){
                // cout<<(i+m-1)<<" ";
                flag = true;
                break;
            }
            m--;
        }
        if(flag)
        {
            i=i+m;
            k++;
        }
        else
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<k;
    return 0;
}