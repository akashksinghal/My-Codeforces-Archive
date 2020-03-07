#include<bits/stdc++.h>
using namespace std;


void solve() {

    int n ;
    cin >>  n ;
    bool all_odd = true , all_even = true ;
    for(int i = 0; i< n; i++)
    {
        int x ;
        cin >> x;
        if(x&1) 
            all_even = false ;
        else 
            all_odd = false ;
    }
    bool ok = true ;
    if(all_odd)
    {
        if(n%2==0)
            ok = false ;
    }
    if(all_even) ok = false ;
    cout << (ok?"YES\n":"NO\n");

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}