#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m1,m2,x,mm1,mm2;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=pow(2,n-1);i++)
    {
        cin>>x;
        if(x>m1){
            m1=x;
            mm1=i;
        }
    }
    for(int i = 1;i<=pow(2,n-1);i++){
        cin>>x;
        if(x>m2){
            m2=x;
            mm2=i+pow(2,n-1);
        }
    }
    if(m1<m2)
    cout<<mm1;
    else
    cout<<mm2;
    return 0;
}