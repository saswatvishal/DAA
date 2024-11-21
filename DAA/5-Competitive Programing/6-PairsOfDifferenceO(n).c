#include<stdio.h>
int main()
{
    int n,k,t;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
    scanf("%d",&k);
    int i=0,j=1;
    while(j<n)
    {
        t=arr[j]-arr[i];
        if(i==j)
        j++;
        else if(t==k)
        {
            printf("1");
            return 0;
        }
        else if(t<k)
        j++;
        else
        i++;
    }
    printf("0");
    
}