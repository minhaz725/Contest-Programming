#include <stdio.h>
int pc(int n)
{
    int i,isp=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0) {isp=1;
        break;}
    }
    return isp;

}
int main()
{
    int i,n,isp=1;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(pc(i)==0)
        {
            if(pc(n-i)==0)
            {
                printf("%d + %d = %d\n",i,n-i,n);
                isp=0;
            }
        }

    }
    if(isp==1) printf("cant be printed");
}
