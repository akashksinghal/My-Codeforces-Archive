#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    string A;
    cin>>T;
    while(T--)
    {
        cin>>A;
        if(A.size()>10)
        {
            cout<<A[0]<<A.size()-2<<A[A.size()-1]<<endl;
        }
        else
        {
            cout<<A<<endl;
        }
    }
}