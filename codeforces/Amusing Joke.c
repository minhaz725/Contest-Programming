#include <stdio.h>
#include <string.h>

/*void decapt(char s[])
{
    int i;
    for(i=0,s[],i++)
    {

    }

}
*/

void counter(int a[26],char s[100])
{
    int i;
    for(i=0;s[i];i++)
    {
        a[s[i]-'A']++;
    }
}


int main()
{
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    gets(s3);
    int l1,l2,l3;
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    if(l1+l2!=l3) {
        printf("NO");
        return 0;
    }
    else{
    int n1[26],n2[26],i;
    for(i=0;i<26;i++) n1[i]=n2[i]=0;


    counter(n1,s1);
    counter(n1,s2);
    counter(n2,s3);
    for(i=0;i<26;i++) {
        //printf("%d  %d\n",n1[i],n2[i]);
        if(n1[i]!=n2[i])
            {
                printf("NO");
                return 0;
            }
        }

    printf("YES");
    return 0;



    }
}
