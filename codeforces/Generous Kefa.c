#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,k,n,a[26];
    scanf("%d %d",&n,&k);
    char *s;
    s=(char*)malloc((n+1)*sizeof(char));
    scanf("%s",s);
    for(i=0;i<26;i++) a[i]=0;
    for(i=0;i<s[i];i++)
    {

        a[s[i]-'a']++;

    }
    for(i=0;i<26;i++)
    {
        if(a[i]>k) {printf("NO");return 0;}
    }

    printf("YES");
    return 0;

}
