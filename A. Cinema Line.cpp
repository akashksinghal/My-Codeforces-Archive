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
    int n,k;
    cin>>n;
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==25){
            a++; continue;
        }        
        if(k==50){
            if(a>=1){
                a--;
                b++;
                continue;
            }
            else{
                cout<<"NO\n";
                return 0;
            }
        }
        if(k==100){
            if(b>=1 and a>=1){
                b--; a--;
                c++; continue;
            }
            if(a>=3){
                a-=3;
                c++;
                continue;
            }
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}