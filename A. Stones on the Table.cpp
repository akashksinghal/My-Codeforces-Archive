#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string A;
    int N;
    cin>>N;
    cin>>A;
    int k=0,l=0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]==A[i-1])
        {
            k++;
        }
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        if(A[i]==A[i+1])
            l++;
    }
    cout<<k?k<l:l;
    cout<<endl;
}