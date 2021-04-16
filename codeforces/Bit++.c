#include <stdio.h>
int main()
{
    int i,n,z;
    z=0;
    char s[4];
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        gets(s);
        if(s[1]==43) z+=1;
        else if(s[1]==45) z-=1;
    }
    printf("%d",z);
    return 0;
}
