// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino 
    int n, one = 0;
    cin >> n;
    vector<int> A(n + 1), B(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
        if (A[i])
            one++;
        B[i] = one;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int m = B[j] - B[i-1];
            // m = number of ones in the range
            int k = one;
            // k = total number of ones 
            k -= m;
            // subtract number of ones in the range from the total number of ones
            k += ((j - i)+1) - m;
            // now add range and subtract the ones ==> result.... hur-ray!!

            ans = max(k, ans);
        }
    }
    cout << ans;
    return 0;
}