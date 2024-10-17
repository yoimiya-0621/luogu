#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;
int n, k;
int a[N],b[N];
int check(int x)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        //if(a[i]<x||b[i]<x)
        //    return 0;
        sum += ((a[i]/x) * (b[i]/x));
    }
    if(sum>=k)
    return 1;
    else
    return 0;
}
signed main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int l=1,r=1e5;
    int mid = (l+r)/2;
    while(l<r)
    {
        if(check(mid)){
            l=mid;
        }
        else{
            r=mid-1;
        }
        mid = (l+r+1)/2;
    }
    cout<<l;
    return 0;
}