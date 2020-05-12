#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];

ll qsrt(ll x,ll y, ll z)
{
    ll k= (x-y);
    ll l= (y-z);
    ll m= (z-x);
    return (k*k)+(l*l)+(m*m);
}
void findClosest(vector<ll> A,vector<ll> B,vector<ll> C, ll p, ll q, ll r) 
{ 

	ll diff = INT64_MAX;
	ll res_i =0, res_j = 0, res_k = 0; 
	ll i=0,j=0,k=0; 
	while (i < p && j < q && k < r) 
	{ 
		
		ll minimum = min(A[i], min(B[j], C[k])); 
		ll maximum = max(A[i], max(B[j], C[k])); 
		if (maximum-minimum < diff) 
		{ 
			res_i = i, res_j = j, res_k = k; 
			diff = maximum - minimum; 
		} 
		if (diff == 0) break; 
		if (A[i] == minimum) i++; 
		else if (B[j] == minimum) j++; 
		else k++; 
	} 
    cout << qsrt(A[res_i],B[res_j],C[res_k])<<endl;
} 

void solve()
{
    ll ko[3],d;
    cin>>ko[0]>>ko[1]>>ko[2];
    vector<ll> A[3];
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<ko[i];j++)
        {
            cin>>d;
            A[i].push_back(d);
        }
    }
    for(ll i=0;i<3;i++)
    {
        asc(A[i]);
    }
    // ll mx = INT64_MIN;
    // vector<ll> res;
    // ll A[] = {1, 4, 10}; 
	// ll B[] = {2, 15, 20}; 
	// ll C[] = {10, 12}; 

	// ll p = sizeof A / sizeof A[0]; 
	// ll q = sizeof B / sizeof B[0]; 
	// ll r = sizeof C / sizeof C[0]; 

	findClosest(A[0], A[1], A[2], A[0].size(), A[1].size(), A[2].size()); 

}
int main()
{
    // fasino
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