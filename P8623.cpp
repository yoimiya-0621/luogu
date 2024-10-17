#include <bits/stdc++.h>
using namespace std;
map<int,pair<int,int>>mp;
int main()
{
    int w,m,n;
    cin>>w>>m>>n;
    int i=1,j=1;
    for(int k=1;k<=max(m,n);k++,i++)
    {
        if(i>w){
            i=1;
            j++;
        }
        if(j&1)
        mp[k]={i,j};
        else
        mp[k]={w-i+1,j};
    }
    int ans=abs(mp[m].first-mp[n].first)+abs(mp[m].second-mp[n].second);
    cout<<ans;
    return 0;
}