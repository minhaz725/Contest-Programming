#include <stdio.h>
void  decapitalize(char a[])
{
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>=65 && a[i]<=90) a[i]=a[i]-'A'+'a';
    }

}
void  vowel_sqzr(char a[])
{
    int i,j;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]=='a' ||a[i]== 'e' ||a[i]== 'i' ||a[i]== 'o' ||a[i]== 'u' ||a[i]== 'y')
        {
            for(j=i;a[j]!=0;j++)
            {
                a[j]=a[j+1];
            }
            a[j]='\0';
            i=i-1;

        }

    }

}
int main()

{
    int i;
    char a[100];
    gets(a);
    decapitalize(a);
    puts(a);
    vowel_sqzr(a);
    puts(a);
    int j,l;
    for(i=0;a[i];i++)
    {
        printf(".");
        printf("%c",a[i]);
    }
}

