#include <stdio.h>
#include <math.h>
int main()
{
    int r,d,k,n,c=0;
    double x,y;
    scanf("%d %d",&r,&d);
    scanf("%d",&n);
    while(n--)
    {
       // printf("%d\n",c);
        scanf("%lf %lf %d",&x,&y,&k);
        if( (sqrt(x*x + y*y) - k >= r-d) && (sqrt(x*x + y*y) + k <= r) )
            c++;

    }
    printf("%d",c);

    return 0;
}

