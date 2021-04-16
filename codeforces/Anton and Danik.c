#include <stdio.h>
int main()
{
    int n,a,d,i;
    a=d=0;
    char s[100001];
    scanf("%d",&n);

    scanf("%s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]=='A') a++;
            else d++;
    }
    if(a>d) printf("Anton");
    else if(a<d) printf("Danik");
    else printf("Friendship");
    return 0;


}
