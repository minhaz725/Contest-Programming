#include <stdio.h>
int main()
{
    int i,j,n,c,t;
    scanf("%d",&n);
    int a[12];
    for(i=0;i<12;i++) scanf("%d",&a[i]);
    if(n==0) {printf("0"); return 0;};
    for(i=0;i<12-1;i++)
    {
        for(j=0;j<12-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    c=0;
    for(i=11,t=1;i>=0;i--,t++)
    {
        c=a[i]+c;

        if(c>=n)
        {
                printf("%d",t);
                return 0;
        }
    }
    printf("-1");
    return 0;
}
