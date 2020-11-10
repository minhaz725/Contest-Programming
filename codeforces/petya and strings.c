#include<stdio.h>
void squeeze(char s[], char ch)
{
    int i,j;
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]==ch)
        {
            for(j=i;s[j]!=0;j++)
            {
                s[j]=s[j+1];
            }
            s[j]='\0';
            i=i-1;

        }

    }

}
int main(void)
{
    char s[80],ch;
    gets(s);
    scanf("%c",&ch);
    squeeze(s,ch);
    puts(s);
}
