#include <stdio.h>
#include <stdlib.h>
int main()
{
    //char line[]=" 11 22 33 44 55 66 77";
    char line[]=" 1 -2 10000 -50 20 7 445";
    char *p,*e;
    p=line;
    int c=0;
    long long input;
    for(p=line;;p=e)
    {
        input = strtol(p,&e,10);
        if(p==e) break;
        c++;
        printf("%ld",input);
        printf("\n");
        puts(p);
        printf("%d",p);
        printf("\n");
        puts(e);
        printf("%d",e);
        printf("\n");
        printf("\n");
        printf("\n");

    }
    printf("%d",c);


}
