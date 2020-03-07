#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string A;
    cin>>A;
    for(int i=0;i<A.size();i++)
    {
        if((A[i]>='A'&&A[i]<='Z') || (A[i]>='a' && A[i]<='z'))
        {
            if(A[i]=='A' || A[i]=='a' || A[i]=='E' || A[i]=='e' || A[i]=='I' || A[i]=='i' ||A[i]=='O' || A[i]=='o' ||A[i]=='U' || A[i]=='u' || A[i]=='y' || A[i]=='Y')
            {
                continue;
            }
            else
            {
                char c= tolower(A[i]);
                cout<<"."<<c;
            }
        }
        else
            cout<<A[i];
    }
}