#include <stdio.h>
int main()
{
    int i,j,k,n,p=0,count=1;
    scanf("%d %d",&n,&k);
    int c=n;
    if(k==1) printf("%d",n);
    else {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            for(j=count;j<=k;j++)
            {
                p++;
                if(c%i==0 && j<k)
                {
                printf("%d %d\n",i,p);
                c=c/i;
                }
                else if(c%i==0 && j==k)
                {
                printf("%d %d\n",c,p);
                }

                else break;


            }

        }
        if(j==k) break;
        else count=j;

    }
    if(p<k) printf("-1");
    }


}
