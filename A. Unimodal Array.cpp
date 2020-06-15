// I'm a f*cking looser
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define asc(A) sort(A.begin(), A.end())
#define dsc(A) sort(A.begin(), A.end(), greater<ll>())
#define input(A, N)            \
    for (ll i = 0; i < N; i++) \
        cin >> A[i];
int main()
{
    fasino
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
#endif
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A, n);
    ll left = 0, right = n - 1;
    while (A[left + 1] > A[left])
        left++;
    while (A[right - 1] > A[right])
        right--;
    ll j = A[left];
    for(ll i=left+1;i<=right;i++){
        if(j!=A[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}