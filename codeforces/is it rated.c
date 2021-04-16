#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int p[n],q[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p[i],&q[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p[i]!=q[i])
        {
            printf("rated");
            return 0;
        }
        else if(p[i]==q[i])
        {
            if(i==n-1)
            {
                if(c==0)
                {
                    printf("maybe");
                    return 0;
                }
                else
                {
                    printf("unrated");
                    return 0;
                }
            }
            if(p[i+1]>p[i]) c++;

        }
    }
    return 0;
}
