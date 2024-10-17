#include <bits/stdc++.h>
using namespace std;
string s2,s3;
void dfs(int l2,int r2,int l3,int r3)
{
    if(l2>r2||l3>r3)
        return ;
    int i;
    for(i=l2;i<=r2;i++){
        if(s2[i]==s3[r3])
            break;
    }
    cout<<s3[r3];
    dfs(l2,i-1,l3,r3-(r2-i)-1);
    dfs(i+1,r2,r3-(r2-i),r3-1);
}
int main()
{
    cin>>s2>>s3;
    dfs(0,s2.size()-1,0,s3.size()-1);
    return 0;
}