#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,m;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        int b[m];
        for(int i=0;i<m;i++)
            scanf("%d",&b[i]);
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
                i++;
            else if(a[i]>b[j])
                j++;
            else
            {
                printf("%d ",a[i]);
                i++;
                j++;
            }
        }
    }
    return 0;
}