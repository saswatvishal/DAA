#include<stdio.h>
int count=0;
void sum(int n)
{
    int i=1;
    count++;
    int s=1;
    count++;
    while(s<=n)
    {
        count++;
        i++;
        count++;
        s+=i;
        count++;
    }
    count++;
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
    printf("%d",count);
}