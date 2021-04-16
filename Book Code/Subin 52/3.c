#include <stdio.h>
int main()
{
    int i;
    for(i=1000;i>0;i--)
    {
        printf("%d\t",i);
        if(i%5==1 && i!=1000) printf("\n");
    }
}
