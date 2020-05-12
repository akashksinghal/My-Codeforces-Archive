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
    string A;
    cin >> A;
    for (int i = 0; i < A.size(); i++)
    {
        if(i+1<A.size())
        {
            if (A[i] == '-' && A[i + 1] == '-')
                i++, cout << 2;
            else if (A[i] == '-' && A[i + 1] == '.')
                i++, cout << 1;
            else
                cout<<0;
        }
        else 
            cout << 0;
    }
    return 0;
}