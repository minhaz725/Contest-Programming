#include <stdio.h>

int main()
{
    int m,n,g,vgfl,reqm;
    scanf("%d %d %d",&m,&n,&g);
    vgfl=g/5;
    if(n>=vgfl){
        reqm=g-vgfl*5;
        if(reqm<=m){

            printf("yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("no");
    }



    return 0;
}
