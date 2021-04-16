#include <stdio.h>
#include <stdlib.h>

char * insertintro(char *str1,char pos,char *str2)
{


    char *str;
     int j=0;
     /*while((*str1+len1))
     {
         len1++;

     }

     while((*str2+len2))
     {
         len2++;

     }
     char *str=(char*)malloc(sizeof(char)*(len1+len2));*/
     str=(char*)malloc(sizeof(str1)+sizeof(str2));



     for(j=0;j<pos-1;j++)
     {
          str=&(*str1);
          str++;
          str1++;
     }
     for(j=pos-1;str2[j];j++)
     {
         str=&(*str2);
         str++;
         str2++;
     }
     for(;str1[j];j++)
     {
         str=&*(str1);
         str++;
         str1++;
     }
     return str;


}
int main()
{
    char *str1,*str2;
    str1=(char *)malloc(sizeof(char)*100);
    str2=(char *)malloc(sizeof(char)*100);
    gets(str1);
    gets(str2);
    int i;
    scanf("%d",&i);
    printf("%s",insertintro(str1,i,str2));
    free(str1);
    free(str2);
}
