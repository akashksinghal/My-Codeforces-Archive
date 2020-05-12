#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    // int arr[5,4,3,2,1];
    ll sum = 0 , i=0, count=0;
    while (sum<n)
    {
        if(n-sum>=5)
            sum+=5;
        else if(n-sum>=4)
            sum+=4;
        else if(n-sum>=3)
            sum+=3;
        else if(n-sum>=2)
            sum+=2;
        else if(n-sum>=1)
            sum+=1;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}