#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int b[n-1];
    for(int i=0;i<n-1;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        b[arr[i]-1]+=1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(b[i]==2)
        {
            printf("%d",i+1);
            break;
        }
    }
}