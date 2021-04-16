#include <stdio.h>
int main()
{
    int n,t,k,d;
    int i,j,m,c,x,l,z=0;
    m=c=l=0;
    scanf(" %d %d %d %d",&n,&t,&k,&d);
    if(k>n) {
        printf("NO");
        return 0;
    }
    for(i=k,j=t;i<=n;i=i+k,j=j+t) x=j;
    for(i=1,j=1;;i++,j++)
    {
        if(i==t)
        {
            c=c+k;
            m=m+i;
            i=1;
        }
        if(j==d)
        {
            z++;
            if(z>1) c=c+k;
            d=t;
            l=l+j;
            j=1;
        }

        printf(" %d %d %d\n",m,l,c);
        if(c>=n) break;
    }

    printf("%d %d %d",x,m,c);

    if(m>=x) printf("NO");
    else printf("YES");
    return 0;


}
