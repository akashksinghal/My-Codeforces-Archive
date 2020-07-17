// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;

const long long mxN = (ll)1e6; 

bool prime[mxN+2];
vector<long long> primes;

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
            primes.push_back(i);
        }
    }
}

signed main()
{
    fasino
    seive();
    ll n,m;
    cin>>n>>m;
    int A[n][m], mini_moves = INT32_MAX;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>A[i][j];
    for(int i=0;i<n;i++)
    {
        int row_moves = 0;
        for(int j=0;j<m;j++){
            row_moves += *lower_bound(primes.begin(),primes.end(),A[i][j]) - A[i][j];
        }
        mini_moves = min(mini_moves,row_moves);
    }
    for(int j=0;j<m;j++){
        int col_moves = 0;
        for(int i=0;i<n;i++){
            col_moves += *lower_bound(primes.begin(),primes.end(),A[i][j]) - A[i][j];
        }
        mini_moves = min(col_moves,mini_moves);
    }
    cout<<mini_moves;
    return 0;
}