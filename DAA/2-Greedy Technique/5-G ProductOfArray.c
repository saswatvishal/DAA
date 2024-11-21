#include<stdio.h>
void sort(int n,int a[])
{
    int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int n,p=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&b[i]);
    }
    sort(n,a);
    sort(n,b);
    for(int i=0;i<n;i++)
    {
        p+=a[i]*b[n-i-1];
    }
    printf("%d",p);
}   