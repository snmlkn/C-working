#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // strcat komutu ile karakter dizilerini birleştirme
    /* char name[100];
     char name2[100];
    int n;
    printf("please enter a name\n");
    scanf("%s",&name);
    printf("please enter a name2\n");
    scanf("%s",&name2);
    printf("please enter char number to add name from name2\n");
    scanf("%d",&n);

    printf("before strcat = %s\n",name);
    printf("after strcat =%s\n",strncat(name,name2,n));*/

    /*char data[100];
    printf("enter a data type of string\n");
    fgets(data,sizeof(data),stdin);

    printf("your data = %s\n",data);
    printf("your reversed data =%s\n ",strrev(data));*/

    char one[10]="bonne";
    char two[10]="soiree";
    char three[10]=" ";

   strcpy(three,one);
   strncpy(three+3,two,5); //three+3 three isimli chardan 3 eleman alýndýðýný gösterir.

   printf("%s",three);










    return 0;
}
