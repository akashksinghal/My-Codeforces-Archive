// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);

vector<int> A[100005];
double ans = 0.0;

void dfs(int cur, int par, double prob, int depth)
{
    int cnt = 0;
    for (auto i : A[cur])
    {
        if (i != par)
            cnt++;
    }
    if (cnt == 0)
    {
        ans += prob * depth;
        return;
    }
    for (auto i : A[cur])
    {
        if (i != par)
        {
            dfs(i, cur, prob / cnt, depth + 1);
        }
    }
}

signed main()
{
    fasino 
    int N, a, b;
    cin >> N;
    N--;
    while (N--)
    {
        cin >> a >> b;
        a--, b--;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    dfs(0, 0, 1.0, 0);
    cout << fixed << setprecision(7) << ans;
    return 0;
}