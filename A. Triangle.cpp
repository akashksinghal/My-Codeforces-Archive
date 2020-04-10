#include<bits/stdc++.h>
using namespace std;

int check(int a,int b,int c)
{
    if(a+b>c && b+c>a && a+c>b)
        return 2;
    else if(a+b>=c && b+c>=a && a+c>=b)
        return 1;
    return 0;
}

int main()
{
    int A[4];
    for(int i=0;i<4;i++)
        cin>>A[i];
    sort(A,A+4);
    int mm = max(check(A[0],A[1],A[2]),check(A[1],A[2],A[3]));
    if(mm == 2)
        cout<<"TRIANGLE"<<endl;
    else if(mm==1)
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
}