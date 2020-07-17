// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        ll k = abs(y1-y2);
        cout<<x1+k<<" "<<y1<<" "<<x2+k<<" "<<y2;
    }
    else if(y1==y2){
        ll k = abs(x1-x2);
        cout<<x1<<" "<<y1+k<<" "<<x2<<" "<<y2+k;
    }
    else{
        if(abs(x1-x2)!=abs(y1-y2)){
            cout<<-1;
        }
        else{
            ll xi = abs(x1-x2);
            if(y1<y2){
                y1+=xi;
                y2-=xi;
            }
            else{
                y1-=xi;
                y2+=xi;
            }
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
        }
    }
    return 0;
}