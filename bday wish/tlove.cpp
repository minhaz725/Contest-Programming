#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{
    char ch;
    char a[20][20];

    printf("      I");
    Sleep(200);
    printf("  ");
    Sleep(200);
    printf("W");
    Sleep(200);
    printf(" ");
    Sleep(200);
    printf("A");
    Sleep(200);
    printf(" ");
    Sleep(200);
    printf("N");
    Sleep(200);
    printf(" ");
    Sleep(200);
    printf("N");
    Sleep(200);
    printf(" ");
    Sleep(200);
    printf("A");
    Sleep(200);
    printf("  ");
    printf("T");
    Sleep(200);
    printf(" ");
    printf("E");
    Sleep(200);
    printf(" ");
    printf("L");
    Sleep(200);
    printf(" ");
    printf("L");
    Sleep(200);
    printf("  ");
    printf("Y");
    Sleep(200);
    printf(" ");
    printf("O");
    Sleep(200);
    printf(" ");
    printf("U");
    Sleep(200);
    printf("  ");
    Sleep(200);
    printf(" ");
    printf("T");
    Sleep(200);
    printf(" ");
    printf("H");
    Sleep(200);
    printf(" ");
    printf("A");
    Sleep(200);
    printf(" ");
    printf("T");


    printf("\n\n\n\n\n");













    printf("\n\n\n");
    int i,j,k;


    for(i=0; i<20; i++)
    {
        printf("              ");
        if(i==0||i==19)
        {
            for(j=0; j<19; j++)
                {printf("T");
                Sleep(50);}
            printf("\n");
        }
        else
        {
            printf("         \T\n");
            Sleep(50);
        }

    }
    printf("\n\n\n\n\n\n");






        double x, y,
    size=10;
    char cht='T';
    string message(" Happy Valentine's Day ");
    int print_line = 4;

    if(message.length() % 2 != 0)
        message += " ";

    for(x=0;x<size;x++)
    {
        for(y=0;y<=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );

            if (dist1 < size + 0.5 || dist2 < size + 0.5 ) {
                printf("%c",cht);
                Sleep(50);
            }
            else
                printf(" ");
        }

        printf("\n");
    }

    for(x=1;x<2*size;x++)
    {
        for(y=0;y<x;y++)
            printf(" ");

        for (y=0;y<4*size + 1 - 2*x; y++)
        {
            if (x>= print_line - 1 && x <= print_line + 1) {
                int idx = y - (4*size - 2*x - message.length()) / 2;
                if(idx < message.length() && idx >= 0) {
                    if (x == print_line)
                        cout<<message[idx];
                    else printf(" ");;
                }
                else
                    {
                        printf("%c",cht);
                        Sleep(50);
                    }
            }
            else
            {
                printf("%c",cht);
                Sleep(50);
            }
        }
        printf("\n");
    }




    printf("\n\n\n\n\n\n");




    for(i=0; i<16; i++)
    {
        printf("              ");
        if(i!=15)
            {printf("T                  T");
            Sleep(100);}
        else
        {
            for(j=0; j<20; j++)
               {
                   printf("T");
                   Sleep(100);
               }
        }
        printf("\n");
    }

    printf("\n\n\n\n\n\n");

     for(i=0; i<16; i++)
    {
        printf("              ");
        if(i==0)
        {
            for(j=0; j<20; j++)
                {printf("T");
                Sleep(100);}
            printf("\n");
        }
        else
        {
            printf("         \T\n");
            Sleep(100);
        }

    }
    printf("\n\n\n\n\n\n\n\n\n");


    return 0;
}
