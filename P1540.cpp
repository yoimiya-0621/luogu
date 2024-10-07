#include <bits/stdc++.h>
using namespace std;
deque<int>v;
map<int,int>mp;
int main()
{
    int n,k,x,ans=0;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        if(mp[x]==0){
            mp[x]=1;
            v.push_back(x);
            ans++;
            if(v.size()>n){
                mp[v[0]]=0;
                v.pop_front();
            }
        }

    }
    cout<<ans;
    return 0;
}