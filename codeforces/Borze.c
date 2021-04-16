#include <stdio.h>
#include <string.h>

int main()
{
    char s[201];
    scanf("%s",s);
    int i;
    //printf("%d\n",strlen(s));
    for(i=0;i<strlen(s);i++)
    {   //printf("%c %d",s[i],i);

        if(s[i]==46) {printf("0");}
        if(s[i]==45 && s[i+1]==46) {printf("1");i++;}
        if(s[i]==45 && s[i+1]==45) {printf("2");i++;}
    }
    return 0;


}

