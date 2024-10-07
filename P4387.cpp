#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
vector<ll>a;
vector<ll>b;
ll n,x;
int main()
{
    int q,flag=1;
    cin>>q;
    for(int k=0;k<q;k++){
        cin>>n;
        flag=1;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            cin>>x;
            b.push_back(x);
        }
        reverse(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cout<<"No"<<'\n';
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<"Yes"<<'\n';
        a.clear();
        b.clear();
    }
    return 0;
}