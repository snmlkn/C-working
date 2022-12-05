#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char arith;
    printf("enter two number for arithmetic operation\n");
    scanf("%d %d",&x,&y);
    printf("enter the arithmetic operation for x=%d and y=%d number\n",x,y);
    printf(" (+ submit)\n (- extract)\n (/ division)\n (* multiplication)\n ");
    scanf(" %c",&arith);

    switch(arith)
    {
        case '+' :printf("%d + %d = %d",x,y, x+y);
        break;
        case '-' :printf("%d - %d = %d",x,y, x-y);
        break;
        case '/' :printf("%d / %d = %d",x,y, x/y);
        break;
        case '*' :printf("%d * %d = %d",x,y, x*y);
        break;
        default :printf("error");
    }

    return 0;
}
