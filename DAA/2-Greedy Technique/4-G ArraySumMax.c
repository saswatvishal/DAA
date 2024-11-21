#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],t;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
    sum+=a[i]*i;
    }
    printf("%d",sum);
    
}