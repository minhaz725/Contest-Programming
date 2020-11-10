#include <stdio.h>
#include <math.h>
int main()
{
    int z;
    z=pow(10,6);
    char s[z];
    int i;
    for(i=0;i<10;i++) scanf("%d",&s[i]);
    for(i=0;i<10;i++) printf("%d\n",s[i]);
}
