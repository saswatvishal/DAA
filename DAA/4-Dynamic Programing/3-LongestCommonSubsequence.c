#include<stdio.h>
#include<string.h>
int max(int a, int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int same( char a[],long n,char b[],long m)
{
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                dp[i+1][j+1]=dp[i][j]+1;
            }
            else
            {
                dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
            }
        }
    }
    return dp[n][m];
}
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    printf("%d", same(s1,strlen(s1),s2,strlen(s2)));
    
}