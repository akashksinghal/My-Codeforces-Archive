#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double N,M,a;
    cin>>N>>M>>a;
    cout<<(ll)(ceil(N/a))*(ll)(ceil(M/a))<<endl;
}