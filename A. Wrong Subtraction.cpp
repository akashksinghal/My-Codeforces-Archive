#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    for(int i=0;i<K;i++)
    {
        if(N%10==0)
            N/=10;
        else
            N--;
    }
    cout<<N;
}