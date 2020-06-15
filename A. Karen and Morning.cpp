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
    string A;
    cin>>A;
    ll ans=0;
    while(A[0]!=A[4] || A[1]!=A[3]){
        ans++;
        if(A[4]=='9')
		{
			A[4]='0';
			A[3]++;
			if(A[3]=='6')
			{
				A[3]='0';
				if(A[0]=='0'||A[0]=='1'){
					if(A[1]=='9'){
						A[1]='0';
						A[0]++;
					}
					else
						A[1]++;
				}
				else
					if(A[1]=='3'){
						A[1]='0';
						A[0]='0';
					}
					else
						A[1]++;
			}
		}
		else
			A[4]++;
    }
    cout<<ans<<'\n';
    return 0;
}