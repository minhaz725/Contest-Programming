#include <stdio.h>
int main()

{
    long long int n,i,n1=0,n2=1,c;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1) printf("%lld\n",n1);
        else if(i==2) printf("%lld\n",n2);
        else {
            c=n1+n2;
            n1=n2;
            n2=c;
            printf("%lld\n",c);
        } //else use nA KORLE EKTA TERM EXTRA ASHBE

    }
    return 0;
}
