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
    int A[n], B[n];
    for(int i=0;i<n;i++) cin>>A[i], B[i] = A[i];
    sort(B,B+n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[B[i]] = i;
    }
    for(int i=0;i<n;i++){
        A[i] = mp[A[i]];
    }
    int L = -5, R = -5;
    for(int i=0;i<n;i++){
        if(A[i]!=i) {
            L = i;
            break;
        }
    } 
    for(int i=n-1;i>=0;i--){
        if(A[i]!=i){
            R = i;
            break;
        }
    }
    if(L==-5 || R==-5){
        cout<<"yes\n1 1";
    }
    else{
        reverse(A+L, A+R+1);
        bool flag = true;
        for(int i=0;i<n;i++){
            if(A[i]!=i) {flag = false;}
        }
        if(flag){
            cout<<"yes\n"<<L+1<<" "<<R+1;
        }
        else cout<<"no";
    }
    return 0;
}