#include <stdio.h>
int main()
{
    int i,j,n,c=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&i,&j);
        if((i-j)>=2 || (j-i)>=2) c++;
    }
    printf("%d",c);
}

