#include<stdio.h>
int main()
{
    int a[10],i,n,min,max;
    printf("enter size of an array:");
    scanf("%d",&n);
    printf("enter the elements in an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=ar[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("maximum array is:%d",max);
    printf("minimum array is:%d",min);
    
}