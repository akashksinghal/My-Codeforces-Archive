// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n;
    cin >> n;
    int num,j,k,mini=INT16_MAX,maxi=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        if(num>maxi)
        {
            maxi = num;
            j = i;
        }
        if(num<=mini)
        {
            mini = num;
            k = i;
        }
    }
    if(j>=k)
        cout << (j+(n-1-k-1));
    else
        cout << (j+(n-1-k));
    return 0;
}