// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define asc(A) sort(A.begin(),A.end());
void solve()
{
    ll n,q,tp1,a,b;
    cin>>n>>q;
    string tp2,tp3;
    map<int, string> mp;
    map<int, std::vector<std::string> > mp2;
    for(int i=0;i<n*3;i++)
    {
        cin>>tp1>>tp2>>tp3;
        if(tp3=="Y")
            mp[tp1]=tp2;
        else
            mp2[tp1].push_back(tp2);
    }
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        if(b==1)
        {
            cout<<mp[a]<<'\n';
        }
        else
        {
            string a1,a2;
            a1 = mp2[a][0];
            a2 = mp2[a][1];
            if((a1<a2)==0)
            {
                string temp = a1;
                a1 = a2;
                a2 = temp;
            }
            if(b==2)
                cout<<a1<<"\n";
            else
                cout<<a2<<"\n";
        }
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}