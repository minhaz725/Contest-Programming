#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%400!=0 && n%100==0) || n%4!=0) printf("not lyear");
    else printf("l year");
}
