#include <stdio.h>
#include <string.h>
int main()
{
   char s[1000],i,c;
   char x[] ={"syed Emad Uddin shubha"};
   printf("small letter e ekjon boss er nam lekhen\n");
   for(;;)
   {
        gets(s);

        for(i=0;s[i];i++)
        {
            if(s[i]!=x[i])
            {
              printf("eda to jani na vai :p ami shudu ekjon boss er tai jani :p try again") ;
              printf("\n");
              memset(s,0,0);
              c=0;
              break;
          }
          else c++;
       }
    if(c==22) break;
   }
    for(;;) printf(" vaya ekta boss coder <3\t\t\t vaya ekta boss coder <3\t\t\t vaya ekta boss coder <3 \n") ;
    return 0;
}
