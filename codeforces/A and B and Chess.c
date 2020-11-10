#include <stdio.h>

int main()
{
    char s[8][8];


    int i,j;

    for(i=0;i<8;i++) scanf("%s",&s[i]);
    int w,b;
    w=b=0;


    for(i=0;i<8;i++)
    {
      for(j=0;j<8;j++)
      {

        switch(s[i][j])
        {
            case'Q':
            w+=9;
            break;
            case'R':
            w+=5;
            break;
            case'B':
            w+=3;
            break;
            case'N':
            w+=3;
            break;
            case'P':
            w+=1;
            break;

            case'q':
            b+=9;
            break;
            case'r':
            b+=5;
            break;
            case'b':
            b+=3;
            break;
            case'n':
            b+=3;
            break;
            case'p':
            b+=1;
            break;



         }

      }
    }

    if(w>b) printf("White");
    else if(w<b) printf("Black");
    else printf("Draw");
    return 0;
}
