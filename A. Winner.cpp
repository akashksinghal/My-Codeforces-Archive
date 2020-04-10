#include<bits/stdc++.h>
using namespace std;

string name[1001]; 
int mark[1001];
map<string, int> ma, mb;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>name[i]>>mark[i];
        ma[name[i]] += mark[i];
    }
    int mx = INT32_MIN;
    for(int i=0; i<n; i++)
    {
        if(ma[name[i]] > mx) 
            mx = ma[name[i]];
    }
    for(int i=0; i<n; i++)
    {
        mb[name[i]] += mark[i];
        if(mb[name[i]]>=mx && ma[name[i]]==mx) 
        {
            cout<<name[i]<<endl; 
            break;
        }
    }
    return 0;
}
