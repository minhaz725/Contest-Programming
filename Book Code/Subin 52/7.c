#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    char line[100000];
    for(i=0;i<n;i++) scanf("%[^\n]",line);
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
