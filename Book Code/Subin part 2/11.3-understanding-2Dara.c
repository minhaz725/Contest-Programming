#include <stdio.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka",
                          "Nepal", "Bhutan", "Maldives"
                         };
    int row,col,name_length;
    for (row = 0; row < 7; row++)
    {
        printf("%s\n", saarc[row]);
    }
    //if we print whole string;col is not needed
    printf("%c %c %c\n",saarc[3][2],saarc[5][0],saarc[0][5]);


    for (row = 0; row < 7; row++)
    {
        name_length = strlen(saarc[row]);
        for(col = 0; col < name_length; col++)
        {
            printf("%c", saarc[row][col]);
        }
        printf("\n");
    }
    //printing by individual letter

    for (row = 0; row < 7; row++)
    {
        name_length = strlen(saarc[row]);
        for(col = 0; col < name_length; col++)
        {
            printf("(%d, %d) = %c, ", row, col, saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
