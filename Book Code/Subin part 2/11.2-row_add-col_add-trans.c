#include <stdio.h>
int main()
{
    int row,col;
    printf("Enter row number:");
    scanf("%d",&row);
    printf("Enter colounm number:");
    scanf("%d",&col);
    int n[row][col];
    int i,j;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&n[i][j]);

    printf("\n\nThe transpose matrix is\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",n[j][i]);
        }
        printf("\n");
    }

    return 0;
}


