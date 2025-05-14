#include<stdio.h>
int r;
int areaofcir()
{
    float PI=3.14, area;
    area=PI*r*r;
    return area;
}
int main()
{
    printf("enter the radius of circle");
    scanf("%d",&r);
    float result=areaofcir (r);
    printf("Area of Circle is:%.2f", result);
}
