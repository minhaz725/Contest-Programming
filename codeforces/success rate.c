#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n],p[n],q[n];
    int i,j,c,d;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&x[i],&y[i],&p[i],&q[i]);
    }
    for(i=0;i<n;i++)
    {
        c=d=0;
        for(j=i;(x[j]+c)%p[j]==0 && (y[j]+c+d)%q[j]==0;)
        {
            if((x[j]+c)%p[j]!=0) {c++; printf("1");}
            else
                {
                    if((y[j]+c+d)%q[j]!=0) d++;
                    printf("1");
                }
        }
        printf("%d",c+d);
    }
}
