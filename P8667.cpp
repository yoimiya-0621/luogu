#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N= 1e5+10;
int a[N],b[N],c[N];
int n;
ll ans;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    ll x=0,y=0;
    for(int k=0;k<n;k++)
    {
        x = lower_bound(a,a+n,b[k])-a;
        y = c+n - upper_bound(c,c+n,b[k]);
        ans+= x*y; 
    }
    cout<<ans;
    return 0;
}


