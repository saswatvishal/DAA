#include<stdio.h>
int c=0;
void reverse(int n)
{
    int rev=0,remainder;
    c++;
    while(n!=0)
    {
        c++;
        remainder=n%10;
        c++;
        rev=rev*10+remainder;
        c++;
        n /=10;
        c++;
    }
    c++;
    //print(rev)
    c++;
}
int main()
{
    int n;
    scanf("%d",&n);
    reverse(n);
    printf("%d",c);
}