#include <stdio.h>
int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);

    int i,c1[26],c2[26];
    for(i=0;i<26;i++) {
            c1[i]=0;
            c2[i]=0;
    }
    for(i=0;s1[i];i++)
    {
        c1[s1[i]-'a']++;
        c2[s2[i]-'a']++;
    }
    for(i=0;i<26;i++) {
         if(c1[i]!=c2[i])
         {
             printf("NO");
             return 0;
         }
    }
    printf("YES");
    return 0;
}


