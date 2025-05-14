#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("enter 10 elements of an array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of all the elements are:%d",sum);
    return 0;
}
