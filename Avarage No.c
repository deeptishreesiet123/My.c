#include<stdio.h>
int n=10,i,sum=0;
int avg()
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    return avg;
}
int main()
{
    printf("enter 10 elements to array");
    int res=avg();
    printf("average of all array elements is%d",res);
    return 0;
}
