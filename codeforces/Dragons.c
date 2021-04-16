#include <stdio.h>
int main()
{
    int i,j,t,r,s,n;
    scanf("%d %d",&s,&n);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
     for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j][0]>a[j+1][0])
            {
                t=a[j][0];r=a[j][1];
                a[j][0]=a[j+1][0];a[j][1]=a[j+1][1];
                a[j+1][0]=t;a[j+1][1]=r;
            }
        }
    }

   //for(i=0;i<n;i++) printf("%d %d\n",a[i][0],a[i][1]);


  for(i=0;i<n;i++)
    {
        if(s>a[i][0]) s=s+a[i][1];
        else {printf("NO");return 0;}
    }
    printf("YES");
    return 0;
}
