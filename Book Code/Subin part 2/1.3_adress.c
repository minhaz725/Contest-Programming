#include <stdio.h>
int main()
{
    char c1='A' ,c2='B';
    int n1=100,n2=6757463636475786868686767;
    int a[5]={50,60,70,500,-10};
/*
    printf("value and adress of c1 is %c and %p\n",c2,&c2);
    printf("value and adress of c2 is %c and %p\n",c1,&c1);
    printf("value and adress of n1 is %d and %p\n",n1,&n1);
    printf("value and adress of n2 is %d and %p\n",n2,&n2);*/
    printf("value and adress of c1 is %d and %p\n",a[0],&a[0]);
    printf("value and adress of c1 is %d and %p\n",a[1],&a[1]);
    printf("value and adress of c1 is %d and %p\n",a[2],&a[2]);
    printf("value and adress of c1 is %d and %p\n",a[3],&a[3]);
    printf("value and adress of c1 is %d and %p\n",a[4],&a[4]);
    printf("adress of array is %p\n",a);
}
