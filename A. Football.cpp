#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string A;
    cin>>A;
    bool flag = false;
    int count =1;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]==A[i-1])
            count++;
        else
        {
            count=1;
        }
        if(count>=7)
        {
            flag = true;
        }        
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}