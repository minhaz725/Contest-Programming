#include <stdio.h>
#include <stdbool.h>
int cmpfunc1 (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int cmpfunc2 (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
int main()
{
    int x,k;
    scanf("%d",&x);
    for(k=1;k<=x;k++)
    {


    int i,n,count,t;
    count=t=0;
    bool good,bad,neutral;
    good=bad=neutral=true;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) {scanf("%d",&a[i]);b[i]=c[i]=a[i];}

    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            neutral=false;
            break;

        }
    }

    if(neutral==true)
    {
        printf("neutral\n");
        continue;
    }



    qsort(b, n, sizeof(int), cmpfunc1);
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            good=false;
            break;

        }
    }
    if(good==true)
    {
        printf("allGoodDays\n");
        continue;
    }
    qsort(c, n, sizeof(int), cmpfunc2);

    for(i=0;i<n;i++)
    {
        if(a[i]!=c[i])
        {
            bad=false;
            break;

        }
    }
    if(bad==true)
    {
        printf("allBadDays\n");
        continue;
    }


    int start;
    start=0;
    for(i=0;i<n;i++) {  if(a[i-1]<a[i] && a[i]>a[i+1])
        {
            start++;
        }
    }

    int go;
    go=0;
    for(i=1;i<n-1;i++)

    {

        if(a[i-1]<a[i] && a[i]>a[i+1])
        {
            go++;


            if(count>t) t=count;
            count=0;
            //printf("%d   %d\n",count,t);
            if(go>=start) break;
        }

        else if(go>0) count++;
        //printf("%d\n",count);


    }
    if(t<1) {printf("none\n");continue;}
    printf("%d\n",t);
    continue;


    }
    return 0;


}
