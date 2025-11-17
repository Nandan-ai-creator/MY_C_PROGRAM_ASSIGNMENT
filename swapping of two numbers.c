#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
