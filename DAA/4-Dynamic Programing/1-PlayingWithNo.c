#include<stdio.h>
long arr[1000];
long rep(int n)
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    for(int i=3;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-3];
    }
    return arr[n];
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%ld",rep(n));
}
