#include<stdio.h>
int main()
{
    int d[9]={1000,500,100,50,20,10,5,2,1},cost,count=0;
    scanf("%d",&cost);
    for(int i=0;i<9;i++)
    {
       while(cost>=d[i])
       {
           cost-=d[i];
           count++;
       } 
       if(cost==0)
       break;
    }
    printf("%d",count);
}