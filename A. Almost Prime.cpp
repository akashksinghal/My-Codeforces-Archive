// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
bool primes[3001]; // prime_check
int cnt[3001]={0}; // Count number of primes divisors
int ans[3001]={0}; // kind of prefixsum for every value
void seive()
{
    primes[0] = true;
    primes[1] = true;
    for(int i=2;i*i<=3000;i++){
        if(!primes[i]){
            for(int j=i*i;j<=3000;j+=i){
                primes[j]=true;
            }
        }
    }
    for(int i=1;i<=3000;i++){
        for(int j=1;j<=3000;j++){
            if(!primes[j] and i%j==0){
                cnt[i]++;
            }
        }
    }
    ans[0]=0;
    for(int i=1;i<=3000;i++){
        ans[i]=ans[i-1]+(cnt[i]==2);
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    seive();
    ll n;
    cin>>n;
    cout<<ans[n];
    return 0;
}