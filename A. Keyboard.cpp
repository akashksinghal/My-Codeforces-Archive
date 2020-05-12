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
    string a = "qwertyuiop";
    string b = "asdfghjkl;";
    string c = "zxcvbnm,./",d;
    char side;
    cin>>side>>d;
    if(side=='R'){
        for(auto j:d){
            bool flag = false;
            for(int i=1;i<a.size();i++){
                if(a[i]==j){
                    cout<<a[i-1];
                    flag = true;
                }
            }
            if(flag) continue;
            for(int i=1;i<b.size();i++){
                if(b[i]==j){
                    cout<<b[i-1];
                    flag = true;
                }
            }
            if(flag) continue;
            for(int i=1;i<c.size();i++){
                if(c[i]==j){
                    cout<<c[i-1];
                    flag = true;
                }
            }
        }
    }
    else{
        for(auto j:d){
            bool flag = false;
            for(int i=0;i<a.size()-1;i++){
                if(a[i]==j){
                    cout<<a[i+1];
                    flag = true;
                }
            }
            if(flag) continue;
            for(int i=0;i<b.size()-1;i++){
                if(b[i]==j){
                    cout<<b[i+1];
                    flag = true;
                }
            }
            if(flag) continue;
            for(int i=0;i<c.size()-1;i++){
                if(c[i]==j){
                    cout<<c[i+1];
                    flag = true;
                }
            }
        }
    }
    return 0;
}