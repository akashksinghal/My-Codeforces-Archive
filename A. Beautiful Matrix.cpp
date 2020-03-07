#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int A[6][6]={0};
    int p,q,count=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                p=i;q=j;
            }
        }
    }
    while(p!=3)
    {
        if(p>3)
        {
            p--;
            count++;
        }
        else
        {
            p++;
            count++;
        }
    }
    while(q!=3)
    {
        if(q>3)
        {
            q--;
            count++;
        }
        else
        {
            q++;
            count++;
        }
    }
    cout<<count<<endl;
}