#include <stdio.h>
int main()
{
    int s,v1,v2,t1,t2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    int c1,c2;
    c1=v1*s+t1*2;
    c2=v2*s+t2*2;
    //printf("%d %d",c1,c2);
    if(c1<c2) printf("First");
    else if(c2<c1) printf("Second");
    else printf("Friendship");
    return 0;
}
