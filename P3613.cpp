#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<ll,ll>,ll>mp;
int main()
{
    ll n,q,i,j,t;
    cin>>n>>q;
    while(q--)
    {
        cin>>t>>i>>j;
        if(t==1){
            cin>>t;
            mp[{i,j}]=t;
        }
        else
        cout<<mp[{i,j}]<<'\n';
    }
    return 0;
}