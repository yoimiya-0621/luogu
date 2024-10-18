#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10;
int a,b,c,d;
int n,m;
vector<priority_queue<int,vector<int>,greater<int>>>v;
int re[N];
map<int,int>mp;
signed main()
{
    cin>>n>>m;
    v = vector<priority_queue<int,vector<int>,greater<int>>> (n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>re[i];
    }
    while(m--)
    {
        cin>>a>>b>>c>>d;
        mp[a+c]+=d;
        while(!v[b].empty())
        {
            if(v[b].top()<=a){
                re[b] += mp[v[b].top()];
                mp[v[b].top()]=0;
                v[b].pop();
            }
            else
                break;
        }
        if(re[b]>=d){
            re[b]-=d;
            v[b].push(a+c);
            cout<<re[b]<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}