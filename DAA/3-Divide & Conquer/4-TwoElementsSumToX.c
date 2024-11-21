#include<stdio.h>
void pairs(int arr[],int l,int r,int x)
{
    if(l>=r)
    {
        printf("No");
        return;
    }
    int sum=arr[l]+arr[r];
    if(sum==x)
    {
        printf("%d\n%d",arr[l],arr[r]);
        return;
    }
    else if(sum<x)
        pairs(arr,l+1,r,x);
    else
        pairs(arr,l,r+1,x);
}
int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    pairs(arr,0,n-1,x);
}