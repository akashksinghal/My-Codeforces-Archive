// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
ll extendedgcd(ll a, ll b, ll &x, ll &y)
{
    if(a==0)
    {
        x = 0;
        y = 1;
        return b;
    }
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll ans = extendedgcd(b%a,a,x1,y1);
    x = y1 - (b/a)*x1;
    y = x1;
    return ans;
}
bool findSolution(ll a,ll b, ll c, ll &x, ll &y, ll &g){
    g = extendedgcd(abs(a),abs(b),x,y);
    if(c%g) return false;
    x = x*(c/g);
    y = y*(c/g);
    if( a < 0 ) x = -x;
    if( b < 0 ) y = -y;
    return true;
}
void solve(ll n, ll m,ll a,ll k)
{
    ll x,y;
    ll c = k+a-n,g;
    if(a==0 and m==0){
        if(n==k){
            cout<<n<<"\n";return;
        }
        cout<<"Impossible\n";
        return;
    }
    ll gcd_ab = __gcd(m,a);
    bool res = findSolution(m,-a,c,x,y,g);
    ll b = (-a/g);
    if(res)
    {
        if(a==0 or m==0){
            if(a==0){
                x = abs(m/g);
                cout<< m*x + n <<'\n';
                return;
            }
            else if(m==0){
                y = abs(a/g);
                cout<<(k+a) + a*y<<'\n';
                return;
            }
        }
        ll o = ceil(-x/(double)b);
        x += o*b ;
        if(b<=0){
            x-=b;
        } 
        ll t=0;
        if( m*x <= k + a -n )
            t = ceil((c - m*x )/(double)m*b);
        x += b*t;
        ll d = m * x + n, lcm = m * a/ __gcd(a,m), maxi = max(n,k+a), tt=0;
        tt = ((d - maxi)/lcm);
        cout<< d - tt*lcm <<'\n';
    }
    else
        cout<<"Impossible\n";
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    while(true)
    {
        ll n,m,a,k;
        cin>>n>>m>>a>>k;
        if(n==0 && m==0 && a==0 && k==0) break;
        solve(n,m,a,k);
    }
    return 0;
}