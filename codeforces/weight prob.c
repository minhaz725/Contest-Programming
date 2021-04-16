#include <stdio.h>

int main()
{
    int m,n,g,i,c,k;

    scanf("%d %d %d",&m,&n,&g);
    i=n*5;
    if(m>=g) printf("yes");
    if(i<=g) c=i;
    else if(i>g) {
        for(;;n--) {
            if(i<g)
                break;

            i=n*5;
            c=i;
        }
    }
    k=c+m;
    if (k>=g)
        printf("yes");
    else
        printf("no");


    return 0;
}
