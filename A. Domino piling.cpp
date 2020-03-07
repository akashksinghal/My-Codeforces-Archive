#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int N,M;
    cin>>N>>M;
    int m = max(N,M);
    int n = min(N,M);
    int domi = 0;
    int left = n%2;
    domi += m * (int)(n/2);
    domi += left * (int)(m/2);
    cout<<domi;
}