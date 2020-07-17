// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
int main()
{
    fasino
    ll n;
    cin>>n;
    string str = "codeforces";
    vector<ll> A(10,1);
    ll cur = 1, idx = 0;
    while(cur<n){
        cur/=A[idx];
        A[idx]++;
        cur*=A[idx];
        idx++;
        idx%=10;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<A[i];j++){
            cout<<str[i];
        }
    }
    return 0;
}