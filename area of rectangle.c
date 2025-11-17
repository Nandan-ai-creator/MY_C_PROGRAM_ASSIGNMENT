#include<stdio.h>
int main()
{
    int length,width;
    float area;
    printf("enter the length and width of a rectangle\n");
    scanf("%d%d",&length,&width);
    area=length*width;
    printf("area of the rectangle is %f",area);
}
