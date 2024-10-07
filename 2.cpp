// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=5e6+10;
// ll a[N];
// ll n,p,k,ans;
// ll qpow(ll a,ll b,ll p){
//     ll res=1;
//     while(b>0){
//         if(b & 1){
//             res = res*a%p;
//         }
//         b >>= 1;
//         a = a*a%p;
//     }
//     return res;
// }
// ll inv(ll a,ll p){
//     return qpow(a,p-2,p);
// }
// int main()
// {
//     cin>>n>>p>>k;
//     ll x=1;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         x = ((x%p)*(k%p))%p;
//         ans = (ans + x*inv(a[i],p)%p)%p;
//     }
//     cout<<ans;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e6+10;
ll a[N];
ll b[N];
ll c[N];
ll n,p,k,ans;
ll qpow(ll a,ll b,ll p){
    ll res=1;
    while(b>0){
        if(b & 1){
            res = res*a%p;
        }
        b >>= 1;
        a = a*a%p;
    }
    return res;
}
ll inv(ll a,ll p){
    return qpow(a,p-2,p);
}
int main()
{
    cin>>n>>p>>k;
    ll x=1;
    ll fi=0;
    b[0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        x = x*a[i]%p;
        b[i]=a[i]*b[i-1]%p;
    }
    c[n+1]=1;
    for(int i=n;i>=1;i--){
        c[i]=c[i+1]*a[i]%p;
    }
    ll flag=1;
    for(int i=1;i<=n;i++)
    {
        flag = flag*k%p;
        fi += flag*b[i-1]*c[i+1]%p;
    }
    cout<<(fi*inv(x,p))%p;
    return 0;
}