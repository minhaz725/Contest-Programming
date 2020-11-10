#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i,j,l,c=0;
    int n[26]={0};
    l=strlen(a);

    for(i=0;i<l;i++)
        for(j=0;j<26;j++){
            if(a[i]==(97+j))
            {
                n[j]++;
                break;
            }
        }


    for(i=0;i<26;i++)
    {

        if (n[i]>0)
        c++;
    }
    if(c%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
}
