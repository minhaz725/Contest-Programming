#include <stdio.h>
void flipper(char w[])
{
    int i;
    for(i=strlen(w)-1;i>=0;i--) printf("%c",w[i]);
}

int main()
{
    int i,j,t,k,l;
    char s[1002],w[1002];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        for(j=0,k=0;j<strlen(s);j++)
        {
           if(s[j]!=' ')
           {
               w[k]=s[j];
               k++;
           }
           else if(k>0)
           {
               w[k]='\0';
               flipper(w);
               k=0;
               printf(" ");
           }
        }
        if(k>0)
        {
            w[k]='\0';
            flipper(w);
            printf("\n");
        }

    }
    return 0;
}

