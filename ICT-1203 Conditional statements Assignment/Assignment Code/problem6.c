#include<stdio.h>
int main()
{
    int m,n;
    // top:
    printf("Enter value of m : ");
    scanf("%d",&m);

    if (m>0)
    printf("The value of n = 1\n");
    else if (m<0)
    printf("The value of n = -1\n");
    else
    printf("The value of n = 0\n");
    // goto top;
    // return 0;
}