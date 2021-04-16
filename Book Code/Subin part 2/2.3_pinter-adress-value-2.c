#include <stdio.h>
int main()
{
    int x=10,y,*p;
    printf("value of x: %d\n",x);
    p=&x;
    y=*p;
    *p=15;
    printf("value of x: %d\n",x);
    printf("value of y: %d\n",y);
    printf("value of *p: %d\n",*p);
    printf("adres of x: %p\n",&x);
    printf("adres of y: %p\n",&y);
    printf("adres of p: %p\n",p);
}
