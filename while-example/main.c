#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i=1;

    printf("enter a number for taking multiple of numbers \n");
    scanf("%d",&number);
    do
    {
        printf("multile of number %d\n",number*i);
        i++;
    }
    while(i<=10);
    {
        /*int result=0;
        result=number*i;
        printf("%d \n",result);
        i++;*/


    }
    return 0;
}
