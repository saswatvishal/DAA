#include<stdio.h>
int fl(int l,int r,int arr[],int x)
{
   if(l==r)
       return arr[l];
   int mid=(l+r)/2;
   if(arr[mid]==x)
       return arr[mid];
   if(arr[mid]>x)
   {
       if(arr[mid-1]<x)
            return arr[mid-1];
       else
            return fl(l,mid,arr,x);
   }
   else
       return fl(mid,r,arr,x);
}
int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&x);
    printf("%d",fl(0,n-1,arr,x));
}