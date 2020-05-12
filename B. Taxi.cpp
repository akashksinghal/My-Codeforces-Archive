#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define ascend(A) sort(A.begin(), A.end())
#define input(A, N)            \
    for (ll i = 0; i < N; i++) \
        cin >> A[i];
int main()
{
    fasino
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
#endif
    ll n,a;
    cin >> n;
    int sum = 0;
    vector<int> A(5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A[a]++;
    }
    A[1] -= A[3];
    if (A[1] < 0)
        A[1] = 0;
    int x = A[2];
    if (x & 1)
    {
        A[1] += 2;
        x--;
    }
    A[2] = x / 2;
    cout << A[4] + A[3] + A[2] + (A[1] + 3) / 4;
    return 0;
}