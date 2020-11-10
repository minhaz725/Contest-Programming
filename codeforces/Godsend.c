#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    long long a[n],c=0;
    for(i=0;i<n;i++) {scanf("%I64",&a[i]);
                    c=c+a[i];}
    if(c%2==0) printf("Second");
    else printf("First");
    return 0;

}
