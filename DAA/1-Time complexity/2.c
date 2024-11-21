#include<stdio.h>
int count=0;
void func(int n)
{
    int j;
    if(n==1)
    {
      count++;
      //printf("*");
      count++;
    }
    else{
        count++;
        for(int i=1;i<=n;i++)
        {
            count++;
            for(j=1;j<=n;j++)
            {
                count++;
                //printf("*");
                count++;
                //printf("*");
                count++;
                count++;
                break;
            }
            if(j>n)
            count++;
        }
        count++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    func(n);
    printf("%d",count);
}