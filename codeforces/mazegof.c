#include <stdio.h>
int main()
{
    int n,m,k,i,j,c,d;
    scanf("%d %d %d",&n,&m,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=m-1,j=m-1;(i<n+1)&&(j>=-1);i++,j--)
    {
        if(i>n-1 ) { i--;
        }
        if(j<0 ) { j++;
        }
        if((m-1==0 && i==m-1 && j==m-1) || (a[i]==0 && a[j]==0)  || (a[i]==0 && a[j]>k) || (a[j]==0 && a[i]>k) || (a[i]>k && a[j]>k)) continue;
        else
        {
                if(a[i]<=k && a[j]>k)
                    { c=i;

                      break;
                    }
                else if(a[i]>k && a[j]<=k)
                    { c=j;
                    break;
                    }
                else if(k>a[i] && k>a[j]) {
                      c=i;
                      break;
                }

        }

    }
    d=(c-m+1)*10;
    printf("%d",d);
}
