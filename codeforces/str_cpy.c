#include <stdio.h>
#include <string.h>
int main()
{
    int n,l1,l2,x,i;
    char s1[1000];
    char s2[11];
    scanf("%s",s1);
    scanf("%d",&n);
    scanf("%s",s2);
    l1=strlen(s1),l2=strlen(s2);
    char s[l1+l2];
    for(i=0;i<n;i++)
    {
        s[i]=s2[i];
    }

    for(i=n,x=0;i<n+l1;i++,x++)
    {
        s[i]=s1[x];
    }


    for(i=n+l1,x=n;i<l1+l2,x<l2-n;i++,x++)
    {
        s[i]=s2[x];
    }
    printf("%s",s);

    return 0;



}
