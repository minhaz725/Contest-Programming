#include <stdio.h>
int main()
{
    int x=100;
    int *p=NULL;

    printf("value of x is %d\n",x);

    p=&x; //p k point na korle error ashbe,cause null pointer e kisu point na koray value thake na;
    printf("value of *p: %d\n",*p);
    return 0;

}
