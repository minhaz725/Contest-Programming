#include <stdio.h>
int main()
{

    long long int n,i,p,k,c;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&p);
        for(k=1,c=0;k<=p/2;k++)
        {
            if(p%k==0)
            c++;
            printf("%I64d %lld\n",k,c);
        }
        if((c+1)==3) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}
