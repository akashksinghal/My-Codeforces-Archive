#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll value = 0;
    string a;
    int N;
    cin>>N;
    while(N--)
    {
        cin>>a;
        for(int i=0;i<3;i++)
            if(a[i]=='+')
            {
                value++;
                break;
            }
            else if(a[i]=='-')
            {
                value--;
                break;
            }
    }
    cout<<value<<endl;
}
