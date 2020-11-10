#include <stdio.h>
int main()
{
    char s[101];
    gets(s);
    int i,zero,one;
    zero=one=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==48) {zero++;one=0;}
        else {one++;zero=0;}
        if(zero>6 || one>6) {printf("YES");return 0;}
    }
    printf("NO");
    return 0;
}
