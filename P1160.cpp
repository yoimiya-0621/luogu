#include <bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+10;
int l[N];
int r[N];
int start=1,k,p;
int main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        cin>>k>>p;
        if(p==0){
            r[l[k]]=i;
            l[i]=l[k];
            r[i]=k;
            l[k]=i;
            if(l[i]==0)
                start=i;
        }
        else{
            l[r[k]]=i;
            l[i]=k;
            r[i]=r[k];
            r[k]=i;
        }
    }
    cin>>m;
    int x;
    while(m--){
        cin>>x;
        if(x==start){
            start=r[x];
        }
        if(l[x])
        r[l[x]]=r[x];
        if(r[x])
        l[r[x]]=l[x];
    }
    int i=start;
    cout<<i;
    i=r[i];
    while(i){
        cout<<' '<<i;
        i=r[i];
    }
    return 0;
}