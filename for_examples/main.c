#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int result=0;
    printf("enter a number for adding 1 to number\n");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        result+=i;

    }
        printf("number submition result is %d\n",result);

    return 0;
}
