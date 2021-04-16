#include <stdio.h>
int main()
{
    int t,k,n;
    scanf("%d %d %d",&n,&k,&t);
    if(t<k) printf("%d",t);
    else if(t>=k && t<=n) printf("%d",k);
    else printf("%d",n+k-t);
    return 0;
}
