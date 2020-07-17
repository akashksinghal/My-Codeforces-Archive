// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);

ll n,m,k;
bool onOFF[100005]={false};
unordered_set<int> divisors[100005];
unordered_set<int> cntOn[100005];

void factorize(){
    vector<int> tmp;
    for(int i=1;i<=n;i++){
        tmp.clear();
        for(ll j=1;j*j<=i;j++){
            if(i%j==0){
                divisors[i].insert(j);
                if(j*j!=i) divisors[i].insert(i/j);
            }
        }
    }
}

int main()
{
    fasino
    char ch;
    cin>>n>>m;
    factorize();
    while(m--){
        cin>>ch>>k;
        if(ch=='+'){
            if(onOFF[k]) cout<<"Already on\n";
            else{
                bool flag = true;
                for(auto j:divisors[k]){
                    if(cntOn[j].size()>=1 and j!=1){
                        flag = false;
                        cout<<"Conflict with "<<*cntOn[j].begin()<<'\n';       
                        break;
                    }
                }
                if(flag){
                    onOFF[k]=true;
                    for(auto j:divisors[k]){
                        cntOn[j].insert(k);
                    }
                    cout<<"Success\n";
                }
            }
        }
        else{
            if(onOFF[k]){
                for(auto i:divisors[k]){
                    cntOn[i].erase(k);
                }
                onOFF[k]=false;
                cout<<"Success\n";
            }
            else{
                cout<<"Already off\n";
            }
        }
    }
    return 0;
}