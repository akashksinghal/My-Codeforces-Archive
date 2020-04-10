#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define endl "\n"
int main() 
{
    string s;
    cin >> s;
    int i = 1;
    int len = s.size();
    int count = 0;
    while(i != len)
    {
        if(s[i] >='A' && s[i] <= 'Z')
            count ++;
        i ++;
    }

    if(count == len - 1)
    {
        i = 0;
        while(i != len)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
            else
                s[i] = s[i] - 32;
            i++;
        }
        cout << s;
    }
    else 
        cout << s;
    return 0;
}
