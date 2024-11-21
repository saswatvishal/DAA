#include<stdio.h>
int count=0;
void factor(int n)
{
    for(int i=1;i<=n;i++)
    {
        count++;
        if(n%i==0)
        {
            count++;
            //printf("%d",i);
            count++;
        }
        else
        count++;
    }
    count++;
}
int main()
{
    int n;
    scanf("%d",&n);
    factor(n);
    printf("%d",count);
}