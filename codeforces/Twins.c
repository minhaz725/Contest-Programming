#include <stdio.h>
int main()
{
    int i,j,t,n,total,sum,c;
    total=sum=c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {scanf("%d",&a[i]);total=total+a[i];}



    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    //for(i=0;i<n;i++) printf("%d\n",a[i]);
    for(i=0;i<n;i++)
    {

        sum=sum+a[i];
        total=total-a[i];
        c++;
        //printf("%d \t%d \t %d\n",total,sum,c);
        if(sum>total)
        {
            printf("%d",c);
            return 0;
        }

    }

}
