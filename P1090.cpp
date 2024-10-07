#include <bits/stdc++.h>
using namespace std;
#define ll long long
priority_queue<ll,vector<ll>,greater<ll>>v;
ll n,ans,x;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push(x);
    }
    ll a,b;
    while(v.size()>1){
        a=v.top();
        v.pop();
        b=v.top();
        v.pop();
        ans += a + b ;
        v.push(a + b);
    }
    cout << ans;
    return 0;
}