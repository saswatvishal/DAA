#include<stdio.h>
int major(int arr[],int l,int r)
{
    if(l==r)
        return arr[l];
    int mid=(l+r)/2;
    int lmajor=major(arr,l,mid);
    int lcount=0;
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==lmajor)
         lcount++;
    }
    return lmajor;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",major(arr,0,n-1));
}