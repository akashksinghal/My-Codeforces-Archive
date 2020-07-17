// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino int n, cnt = 1;
    cin >> n;
    vector<int> A(n), B;
    input(A);
    for (int i = 1; i < n; i++)
    {
        if (A[i] == A[i - 1])
            cnt++;
        else
            B.push_back(cnt), cnt = 1;
    }
    B.push_back(cnt);
    int ans = 0;
    if(B.size()>1)
        for (int i = 0; i < B.size() - 1; i++)
            ans = max(ans, min(B[i], B[i + 1]));
    cout << ans*2;
    return 0;
}