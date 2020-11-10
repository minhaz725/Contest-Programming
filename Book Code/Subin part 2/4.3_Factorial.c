#include <stdio.h>
int f=0;
int fact(int n)
{
    f++;
    if(n==0) return 1;
    printf("%d\n",n);
    return n*fact(n-1);
    printf("%d\n",n);
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d %d",fact(x),f);
    printf("%d",f);
    return 0;
}
