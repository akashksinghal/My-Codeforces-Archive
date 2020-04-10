#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
bool islucky(ll i)
{
    string A = to_string(i);
    for(char a:A)
    {
        if(a!=4 && a!=7)
            return false;
    }
    return true;
}
int main()
{
    fasino
    ll N;
    cin>>N;
    for(int i=1;i<1000;i++)
    {
        if(islucky(i) && N%i==0)
        {
            cout<<"YES\n";
            break;
        }
    }
    cout<<"NO\n";
    return 0;
}