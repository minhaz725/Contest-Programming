#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int l,i,j,c,k;
    scanf("%s",a);
    l=strlen(a);
    for(i=1,j=0,c=0,k=0;i<l,j<l; i++,j++)
    {
        if(a[i]>=65 && a[i]<=90) c++;
        if(a[j]>=65 && a[j]<=90) k++;
    }

    //printf("%d %d\n", c, k);
    if(c!=l-1) printf("%s",a);
    else if(k!=l)
    {
        if(a[0]>=97 && a[0]<='z') a[0]=a[0]-'a'+'A';
        for(i=1; i<l; i++)
        {
            if(a[i]>=65 && a[i]<=90) a[i]=a[i]+'a'-'A';

        }
        printf("%s",a);
    }
    else {
        for(i=0; i<l; i++)
        {
            if(a[i]>=65 && a[i]<=90) a[i]=a[i]+'a'-'A';

        }
        printf("%s",a);
    }
    return 0;
}
