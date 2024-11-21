#include<stdio.h>
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void qiso(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot=arr[high];
        int i=low;
        for(int j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {
                swap(&arr[i],&arr[j]);
                i++;
            }
        }
        swap(&arr[i],&arr[high]);
        qiso(arr,low,i-1);
        qiso(arr,i+1,high);
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qiso(arr,0,n-1);
    print(arr,n);
}