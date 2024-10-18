#include<stdio.h>
long long bin_search(long long arr[],long long len,long long num);
#define MAX_LENGTH 1000000
long long arr[MAX_LENGTH];
int main()
{long long t1,t2,a,b;
scanf("%lld%lld",&t1,&t2);
for(int i=0;i<t1;i++)
{
scanf("%lld",&a);
arr[i]=a;
}
while(t2--)
{
scanf("%lld",&b);
long long flag=bin_search(arr,t1,b);
if(flag==-1)
{
printf("%lld ",flag);
}
else
{printf("%lld",flag+1);
}
}
return 0;
}
long long bin_search(long long arr[],long long len,long long num)
{
long long min=0;long long max=len-1;
while(min<=max)
{long long mid=min+(max-min)/2;
if(arr[mid]<num)
{
min=mid+1;
}
else if(arr[mid]>num)
{max=mid-1;
}
else if(arr[mid]==num)
{
return mid;
}

}
return -1;
}