#include<stdio.h>
int main()
{
    int n,c,i;
    c=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {


        if(((n-i)%i)==0) c++;

    }
    printf("%d",c);
    return 0;
}
