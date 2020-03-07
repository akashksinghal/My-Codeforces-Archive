#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll A[50];
    ll N,K,count=0;
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        if(A[i]>=A[K-1] && A[i]>0)
            count++;
    }
    cout<<count<<endl;
}