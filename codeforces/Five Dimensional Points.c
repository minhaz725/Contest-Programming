#include <stdio.h>
#include <math.h>
int check(int a[][5],int n,int x)
{
    int i,j;
    float hor,lob,horx;
    for(i=0;i<n;i++)
    {
        hor=lob=horx=0;
        if(i==x) continue;
        for(j=0;j<5;j++)
        {
                lob=lob + a[x][j]*a[i][j];
                hor=hor + a[i][j]*a[i][j];
                horx=horx +a[x][j]*a[x][j];
                printf("no.%d&%d  %f %f\n",x+1,i+1,hor,lob);
        }

        hor=sqrt(horx) * sqrt(hor) ;
        printf("no.%d&%d  %f %f\n",x+1,i+1,hor,lob);
        if(hor==0) continue;
        else if(acos(lob/hor) < (acos(-1))/2) return 0;

    }
    return x;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][5],c[n],count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++) scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++) printf("%d",a[i][j]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        c[i]=check(a[n][5],n,i);
        count=count+c[i];
    }
    printf("%d\n",count);
    for(i=0;i<n;i++)
    {
        if(c[i]!=0) printf("%d\n",c[i]);
    }

    return 0;
}

