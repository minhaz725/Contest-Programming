#include <stdio.h>
int main()
{
    char s[]="Bangladesh";
    char *p;

    printf("string is %s\n ",s);
    printf("adrss of s is % p\n",s);
    printf("adrss of s is % d\n",s);
    p=s;
    printf("string is %s\n ",p);
    printf("adres is %p\n ",p);
    printf("adres is %d\n ",p);//????
    ////////////////////
    char c1='A',c2='B',c3='C';
    char *p1,*p2,*p3;
    p3=&c3;
    p2=&c2;
    p1=&c1;

    printf("%c %p,%c %p,%c %p\n",*p1,p1,*p2,p2,*p3,p3);
    printf("%c %d,%c %d,%c %d\n",*p1,p1,*p2,p2,*p3,p3);//????
    return 0;

}
