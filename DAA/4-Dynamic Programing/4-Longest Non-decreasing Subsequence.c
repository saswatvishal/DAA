#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int arr[n],dp[n];
    max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        dp[i]=1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<=arr[i] && dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
            }
        }
        if(max<dp[i])
        max=dp[i];
    }
    printf("%d",max);
    return 0;
}