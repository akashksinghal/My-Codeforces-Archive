#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string input;
    cin>>input;
    int one=0,two=0,three=0;
    for(int i=0;i<input.size();i++)
    {
        if(input[i]!='+')
        {
            if(input[i]=='1')
                one++;
            if(input[i]=='2')
                two++;
            if(input[i]=='3')
                three++;
        }
    }
    while(one--)
    {
        cout<<1;
        if(two>0 || three>0 || one>0)
            cout<<"+";
    }
    while(two--)
    {
        cout<<2;
        if(three>0 || two>0)
            cout<<"+";
    }
    while(three--)
    {
        cout<<3;
        if(three>0)
            cout<<"+";
    }
}