#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
ll a[N];
ll n,k;
int check(ll x)
{
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]/x;
    }
    return sum>=k;
}
int main()
{
    cin>>n>>k;
    ll SUM=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        SUM += a[i];
    }
    if(SUM<k){
        cout<<0;
        return 0;
    }
    ll l=1,r=1e8;
    ll mid = (l + r) >> 1;
    while(l<r)
    {
        if(check(mid)){
            l=mid;
        }
        else{
            r=mid-1;
        }
        mid = (l + r + 1)>> 1;
    }
    cout<<l;
    return 0;
}