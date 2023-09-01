#include<stdio.h>

int main()
{
    hcf = 1;
  printf("enter the num1,num2",num1,num2);
  scanf("%d%d",&num1,num2);
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }  
    printf("The HCF : %d", num1);
    return 0;
}