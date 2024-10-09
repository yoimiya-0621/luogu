#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s1,s2;
void dfs(int l1,int r1,int l2,int r2){
    if(l1>r1||l2>r2)
        return;
    int i;
    for(i=l2;i<=r2;i++){
        if(s2[i]==s1[l1]){
            break;
        }
    }
    dfs(l1+1,l1+i-l2,l2,i-1);
    dfs(l1+i+1-l2,r1,i+1,r2);
    cout<<s1[l1];
}
int main()
{
    cin>>s2>>s1;
    dfs(0,s1.size()-1,0,s2.size()-1);
    return 0;
}