#include <stdio.h>
int main()
{
    int i,n,j,c,k=0;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0,c=0;i<3;i++)
        {
            scanf("%d",&j);
            if(j==1) c++;
        }
        if(c>=2) k++;
    }
    printf("%d",k);
}
