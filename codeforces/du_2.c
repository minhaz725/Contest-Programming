
#include <stdio.h>
#include <math.h>
int main()
{
    int r,i;
    scanf("%d",&r);
    float c,l;
    c=r/1.0;
    //printf("%f %f\n\n",sqrt(2),c);
    for(i=0;i<6;i++)
    {
        c=c+(  r  /  (  1.0*sqrt(2)  )  );
        //printf("%f\n",c);
        r=r/sqrt(2);
        if((r/sqrt(2))<0.00000001) break;
    }
    printf("%.2f",c);

}
