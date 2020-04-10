#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    cin>>A;
    int k = A[A.length()-1]-'0';
    if(k&1)
        cout<<1<<endl;
    else
    {
        cout<<0<<endl;
    }
    
}