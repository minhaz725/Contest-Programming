#include <stdio.h>
#include <math.h>
int main()
{
    long long int ax,ay,bx,by,cx,cy;
    scanf("%I64 %I64 %I64 %I64 %I64 %I64",&ax,&ay,&bx,&by,&cx,&cy);
    double ab,bc,l1,l2;
    ab=sqrt( ((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay))  );
    bc=sqrt( ((bx-cx)*(bx-cx)) + ((by-cy)*(by-cy))  );
    if(ab!=bc) {printf("No");return 0;}
    else{
    int dx,dy;
    dx=(ax+cx)/2;
    dy=(ay+cy)/2;
    l1=sqrt( ((dx-ax)*(dx-ax)) + ((dy-ay)*(dy-ay))  );
    l2=sqrt( ((dx-bx)*(dx-bx)) + ((dy-by)*(dy-by))  );
    if(l1=!l2) printf("No");
    else printf("Yes");
    }
    return 0;
}

