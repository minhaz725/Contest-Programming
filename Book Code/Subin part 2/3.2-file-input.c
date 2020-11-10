#include <stdio.h>
int main()
{
    FILE *in ,*out;
    char *input_file="in.txt";
    char *output_file="out.txt";
    int n1,n2,s;

    in=fopen(input_file,"r");//just read korbe,onno kisu dile vul adrs e jabe
    out=fopen(output_file,"w");//eta write korbe

    fscanf(in,"%d",&n1);
    fscanf(in,"%d",&n2);
    s=n1+n2;
    printf("%d %d %d\n",n1,n2,s);
    fprintf(out,"%d %d %d\n",n1,n2,s);

    fclose(in);
    fclose(out);


}
