#include <stdio.h>
int main()
{
    int n,a,temp;
    double b;
    scanf("%d %d %lf",&n,&a,&b);
    int i,c,count;
    c=count=0;
    while(n--)
    {


        scanf("%d",&temp);
        if (temp==1 && a!=0)   a--;

        else if(temp==2 && b>.99) b--;
        else if (temp==1 && a==0 && b!=0)  b=b-.5;
        else count=count+temp;
        //c++;
        //printf("%d\n",c);

    }
    printf("%d",count);
    return 0;
}
