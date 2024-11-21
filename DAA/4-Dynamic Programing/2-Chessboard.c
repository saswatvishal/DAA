#include<stdio.h>
int max(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if (i==0 || j==0)
            arr[i][j]=0;
            else
            scanf("%d",&arr[i][j]);
            
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]+=max(arr[i-1][j],arr[i][j-1]);
        }
    }
    printf("%d",arr[n][n]);
}