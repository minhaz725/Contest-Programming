#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *marks;
    int i,n;
    scanf("%d",&n);


    /////////allocate mem//////////

    marks=(int*)malloc(sizeof(int)*n);///////(int*) is about typecasting

    for(i=0;i<n;i++) scanf("%d",&marks[i]);
    for(i=0;i<n;i++) printf("%d\t",marks[i]);


    /////////allocate and init mem///////
    marks=(int*)calloc(sizeof(int)*n,sizeof(int)*n);
    for(i=0;i<n;i++) printf("%d\t",marks[i]);

    ////////free mem or deallocation////////////
    free(marks);
    return 0;

}
