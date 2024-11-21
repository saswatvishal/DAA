#include<stdio.h>
void sort(int n,int a[])
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
}
int main()
{
    int n,m,j=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(n,a);
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    sort(m,b);
    for(int i=0;i<m;i++)
    {
        while(j<n)
        {
            j++;
            if(a[j-1]<=b[i])
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}