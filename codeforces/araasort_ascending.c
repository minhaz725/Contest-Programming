#include <stdio.h>

int main()
{
    int i,n,l,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                l=a[j];
                a[j]=a[j+1];
                a[j+1]=l;
            }
            for(c=0;c<n;c++) printf("%d\n",a[c]);

        }

    }
    for(i=0;i<n;i++) printf("%d\t",a[i]);

}
