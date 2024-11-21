#include<stdio.h>
void sort(int n,int a[])
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                
            }
        }
    }
}
int main()
{
    int n,sum=0,n1=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(n,a);
    for(int i=0;i<n;i++)
    {
        sum+=(n1*a[i]);
        n1*=n;
    }
    printf("%d",sum);
}