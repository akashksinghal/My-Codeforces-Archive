// I'm a f*cking looser

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define mxN 1001
bool prime[mxN+2];
vector<long long> primes;
set<long long> pm;


void seive(){
    prime[0]=prime[1]=true;
    for(long long i=4;i<=mxN;i+=2){
        prime[i] = true;
    }
    for(long long i=6;i<=mxN;i+=3){
        prime[i] = true;
    }
    for(long long i=5;i*i<=mxN;i++){
        if(!prime[i]){
            for(long long j=i*i;j<=mxN;j+=i){
                prime[j] = true;
            }
        }
    }
    for(int i=2;i<=mxN;i++){
        if(!prime[i]){
            pm.insert(i);
            primes.push_back(i);
        }
    }
}

int main()
{
    fasino
    seive();
    ll n,k,ans=0;
    cin>>n>>k;
    for(ll i=0;i<primes.size()-1;i++){
        if(pm.find(primes[i]+primes[i+1]+1)!=pm.end() and (ll)(primes[i]+primes[i+1]+1)<=n){
            // cout<<primes[i]+primes[i+1]+1<<" ";
            ans++;
        }
    }
    if(ans>=k){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}