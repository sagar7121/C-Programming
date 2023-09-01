#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("perfect square");
            return 0;
        }
    }
    printf("not a perfect square");
    return 0;
}