#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i*i<=n;i++)
    {
        printf("%d %d\n",n,i);
        if(n/i==i) {printf("Yes");return 0;}
    }
    printf("No");
    return 0;
}
