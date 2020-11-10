#include <stdio.h>
int main()
{
    float l, r, x, y,k;

    scanf("%f %f %f %f %f",&l,&r,&x,&y,&k);
    if(k<=(r/(x*1.0)) &&  k>=(l/(y*1.0 ))) printf("YES");
    else printf("NO");
    //printf("%f %f",r/x,l/y);
    return 0;
}
