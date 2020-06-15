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
    int a[50][50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 0;
        }
    }
    /*
        Creating A Rhombus of Zeros
        1 1 0 1 1
        1 0 0 0 1
        0 0 0 0 0
        1 0 0 0 1
        1 1 0 1 1
    */
    for(int i=0; i < n/2; i++) {
		int len = n/2 - i;
		for(int j=0; j<len;j++) 
        {
			int x1 = i, x2 = n - 1 - i;
			int y1 = j, y2 = n - 1 - j;
			a[x1][y1] = 1;
			a[x1][y2] = 1;
			a[x2][y1] = 1;
			a[x2][y2] = 1;
		}
	}
	int odd = 1, even = 2;
	for(int i=0; i < n; i++)
		for(int j=0; j<n;j++) 
			if (a[i][j]) a[i][j] = even, even += 2;
			else a[i][j] = odd, odd += 2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}