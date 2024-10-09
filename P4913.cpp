#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+10;
ll n;
ll ans=1;
struct Tree{
    ll left;
    ll right;
}t[N];
void dfs(int x,ll deep){
    if(x==0)
        return;
    ans=max(ans,deep);
    dfs(t[x].left,deep+1);
    dfs(t[x].right,deep+1);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i].left>>t[i].right;
    }
    dfs(1,1);
    cout<<ans;
    return 0;
}