#include<bits/stdc++.h>
using namespace std;

int main()
{
    int K = 0,cost = 0;
    while (true)
    {
        string A;
        cin>>A;
        if(!A) break;
        if(A[0]=='+') K++;
        else if(A[0]=='-') K--;
        else
        {
            int pos;
            for(int i=0;i<A.length();i++)
            {
                if(A[i]==':')
                {
                    pos = i;
                    break;
                }
            }
            cost += K*(A.length()-pos-1);
        }
    }
    cout<<cost<<endl;
}