#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x];
    int i,j,t;
    for(i=0;i<x;i++) scanf("%d",&a[i]);


    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(a[j+1]<a[j])
            {

                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    for(i=0;i<x;i++) printf("%d  ",a[i]);
    return 0;

}
