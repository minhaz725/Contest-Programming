#include <stdio.h>
int main()
{
    long long int n,a;
    scanf("%I64d",&n);
    int i,c=0,t=0;
    a=n;
      while(n != 0)
    {
        n /= 10;
        ++t;
    }
    n=a;
    a=0;


    for(i=1;i<=t;i++)
    {
        a=n%10;
        n/=10;
        //printf("%d\n",a);
        if(a!=0 && (a==7 || a==4)) c++;
        //printf("%d\n",c);

    }
    if(c==7 || c==4) printf("YES");
    else printf("NO");
}
