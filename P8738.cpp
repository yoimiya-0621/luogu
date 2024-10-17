#include <bits/stdc++.h>
using namespace std;
string t[]={"geng","xin","ren","gui","jia","yi","bing","ding","wu","ji"};
string d[]={"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"};
int main()
{
    int n;
    cin>>n;
    n=n-2020;
    int x=n%10,y=n%12;
    while(x<0)x+=10;
    while(y<0)y+=12;
    cout<<t[x]<<d[y];
    return 0;
}