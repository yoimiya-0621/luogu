#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
ll t,n,k,x,ans;
ll b[N];
map<ll,vector<ll>>a;
map<ll,ll>mp;
deque<ll>v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b[i]>>k;
        v.push_back(b[i]);
        while(k--){
            cin>>x;
            a[b[i]].push_back(x);
        }
    }
    for(int i=1;i<=n;i++){
        while(b[i]-v.front()>=86400){
            for(int k=0;k<a[v.front()].size();k++){
                mp[a[v.front()][k]]-=1;
                if(mp[a[v.front()][k]]==0)
                    ans--;
                v.pop_front();
            }
        }
        for(int k=0;k<a[b[i]].size();k++){
            if(mp[a[b[i]][k]]==0)
                ans++;
            mp[a[b[i]][k]]+=1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}