#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define ll long long
int main()
{
    string a,b;
    int k=0;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.size();i++)
    {
        char c = tolower(a[i]);
        char d = tolower(b[i]);
        if(c>d)
        {
            k=1;
            break;
        }
        else if(c<d)
        {
            k=-1;
            break;
        }
        else
        {
            k=0;
        }
    }
    cout<<k;
}