#include <bits/stdc++.h>
using namespace std;
#define ll long long
stack<ll>stk;
ll ans=0;
int main()
{
    string s;
    cin>>s;
    ll x=0;
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i])){
            x=x*10+s[i]-'0';
        }
        else if(s[i]=='.'){
            stk.push(x);
            x=0;
        }
        else if(s[i]=='@'){
            break;
        }
        else{
            ll a=stk.top();
            stk.pop();
            ll b=stk.top();
            stk.pop();
            if(s[i]=='+'){
                stk.push(a+b);
            }
            if(s[i]=='-'){
                stk.push(b-a);
            }
            if(s[i]=='*'){
                stk.push(a*b);
            }
            if(s[i]=='/'){
                stk.push(b/a);
            }
        }
    }
    cout<<stk.top();
    return 0;
}