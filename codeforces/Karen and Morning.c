#include <stdio.h>
int main()
{
    char s[5];
    gets(s);
    int c;
    c=0;

    for(; ;)
    {

    if(s[0]==s[4] && s[1]==s[3]) break;
    else
        {
            if(s[4]>=57) {s[4]=47;s[3]=s[3]+1;}
            if(s[3]>53) {s[3]=48;s[1]=s[1]+1;}
            if(s[1]>57) {s[1]=48;s[0]=s[0]+1;}
            if(s[0]==50 && s[1]>51) {s[1]=s[0]=48;}
            s[4]=s[4]+1;
            c++;


        }



    }
    printf("%d",c);
    return 0;
}
