#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N= 2e5+10;
ll n,ans;
ll a[N];
ll h[N];
int main()
{
    cin>>n;
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt = 0;
        for(int k=a[i];k>1;){
            k = sqrt(k/2 + 1);
            cnt++;
        }
        h[i] = cnt;
        ans = max(ans,cnt);
    }
    ll sum=0;
    for(ll k = ans; k>0; k--)
    {
        for(int i=0; i<n; i++)
        {
            if(h[i]==k){
                h[i]-=1;
                if(a[i]!=a[i+1])
                    sum++;
                a[i]  = sqrt(a[i]/2+1);
            }
        }
    }
    cout<<sum;
    return 0;
}