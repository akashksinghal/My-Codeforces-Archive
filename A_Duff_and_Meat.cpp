// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino 
    int n, sum = 0;
    cin >> n;
    int A[n], P[n];
    for (int i = 0; i < n; i++)
        cin >> A[i] >> P[i];
    for (int i = 1; i < n; i++)
    {
        if (P[i] > P[i - 1])
            P[i] = P[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        sum += A[i] * P[i];
    }
    cout << sum;
    return 0;
}