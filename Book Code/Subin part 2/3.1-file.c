#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my_file.txt";
    fp=fopen(filename,"w");
    fprintf(fp,"file created by my program");
    fclose(fp);
    fp=fopen(filename,"r+");//a(append)/a+ means kinda edit..r use korle no change..w/w+ dile overwrite.r+ dile 2nd line age.
    fprintf(fp,"baaal");
    return 0;

}

