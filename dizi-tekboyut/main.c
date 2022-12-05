#include <stdio.h>
#include <stdlib.h>

int main()
{
    //diziye ilk 10 çift elemaný entegre eden program

    int i;
    int tab[10];
    for(i=0;i<10;i++)
    {
        tab[i]=2*i;
        printf("%d =%d\n",i,tab[i]);

    }
    return 0;
}
