// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, sumA = 0, sumB = 0;
    cin>>n;
    vector<ll> A(n);
    ll start = 0, end = n-1;
    input(A);
    bool A1 = true;
    while(start<=end){
        if(A1){
            if(A[start]>=A[end]){
                sumA += A[start++];
            }
            else{
                sumA += A[end--];
            }
            A1 = !(A1);
        }
        else{
            if(A[start]>=A[end]){
                sumB += A[start++];
            }
            else{
                sumB += A[end--];
            }
            A1 = !(A1);
        }
    }
    cout << sumA << " " << sumB <<'\n';
    return 0;
}