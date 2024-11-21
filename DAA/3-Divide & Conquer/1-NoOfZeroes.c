#include<stdio.h>
int no0(int i,int j,int n,int arr[])
{
    if(arr[i]==0 && i==j)
        return n-i;
    if(i<j)
    {
     int mid=(i+j)/2;
     if(arr[mid]==0 && arr[mid-1]==1)
         return n-mid;
     else if(arr[mid]==0 && arr[mid-1]!=1)
         return no0(i,mid-1,n,arr);
     else
         return no0(mid+1,j,n,arr);
    }
    return 0;
}
int main ()
{
    int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
     scanf("%d",&arr[i]);
    printf("%d",no0(0,m-1,m,arr));
}