#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i,n;
    bool inc,dec,eql;
    inc=dec=eql=true;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
            if(a[i]!=a[i+1]) eql=false;
                       }

    if(eql==true) {printf("YES");return 0;}
    else
  { int max,pos;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max) {max=a[i];
        pos=i;}
    }



    if(pos==0) inc=false;
    if(inc==true){
    for(i=pos;i<n-1 ;i++)
    {
       // printf("%d \n",a[i]);

        if(a[i]<a[i+1]){
        inc=false;
        break;}

    }
    }
    if(pos==n) dec=false;
    if(dec==true)
    {

    for(i=pos;i>0 ;i--)
    {
        //printf("%d \n",a[i]);
        if(i==n) break;
        if(a[i]<a[i-1]){
        dec=false;
        break;}

    }
    }

    if(inc==false || dec==false) printf("NO");
    else printf("YES");
    return 0;
   }

}

