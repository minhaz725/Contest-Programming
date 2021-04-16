#include <stdio.h>

int main()
{
    int i,j,t,k,l;
    char s[1002];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        for(j=0;j<strlen(s)/2;j++)
        {
            k=s[j];
            s[j]=s[l-1-j];
            s[l-j-1]=k;
        }
        puts(s);
        printf("\n");
        for(j=0;s[j];j++) s[i]=0;
    }
    return 0;
}
