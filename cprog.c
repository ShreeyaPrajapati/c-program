#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is %d\n",a,b,a+b);
    printf("sub of %d and %d is %d\n",a,b,a-b);
    printf("mul of %d and %d is %d\n",a,b,a*b);
    printf("div of %d and %d is %d\n",a,b,a/b);
    return 0;
}