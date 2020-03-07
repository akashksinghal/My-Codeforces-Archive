#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N,temp;
    cin>>N;
    ll count = 0;
    for(int i=0;i<N;i++)
    {
        int win =0;
        for(int j=0;j<3;j++)
        {
            cin>>temp;
            if(temp==1)
                win++;    
        }
        if(win>=2)
            count++;
    }
    cout<<count<<endl;
}