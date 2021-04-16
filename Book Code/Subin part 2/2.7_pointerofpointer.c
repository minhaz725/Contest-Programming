#include <stdio.h>
int main()
{
    char c='A';
    char *p,**q;

    p=&c;
    q=&p;

    printf("adrs of c %p\n",&c);
    printf("adrs of p %p\n",&p);
    printf("adrs of q %p\n",&q); //refering to adrs of q
    printf("adrs of p %p\n",&*q); //refering to adrs of p
    printf("adrs of c %p\n\n",&**q); //refering to adrs of c

    printf("value of c is %c\n",c);
    printf("value of c is %c\n",*p);
    printf("value of c is %c\n",**q);
    printf("value of p is %c %d\n\n",*q,*q);//nonprintable,6356751s ascii value is unknown

    **q='B';
    printf("value of c is %c\n",c);
    printf("value of c is %c\n",*p);
    printf("value of c is %c\n",**q);
    //all's gonna be B!!!surprised eh???cause when **q=B ,i changed the value at that adrs.so the value in c,*p changed






}
