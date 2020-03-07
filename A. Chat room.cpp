#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size size()
int main()
{
    string A,B="hello";
    cin>>A;
    int j=0;
    for(int i=0;i<A.size;i++)
    {
        if(A[i]==B[j])
            j++;   
        if(j==5)
            break;
    }
    if(j==5)
        cout<<"YES";
    else
    {
        cout<<"NO";
    }
}