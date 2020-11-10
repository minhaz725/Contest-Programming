#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i,j,n,m,c,min_c,min_r,total,counter;
    c=min_c=min_r=total=counter=0;
    bool row;
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
            total=total+a[i][j];
        }
    }


    if(n<=m) row=true;
    else row=false;

    if(row==true)
    {
        for(i=0;i<n;i++) {

        min_r=b[i][0];
        for(j=1;j<m;j++)
        {

            if(min_r>b[i][j])
            min_r=b[i][j];
            else if(b[i][j]==0) break;
        }
        for(j=0;j<min_r;j++) counter++;

        for(j=0;j<min_r;j++) c+=m;
        for(j=0;j<m;j++) {
                b[i][j]=b[i][j]-min_r;

        }


    }






    for(j=0;j<m;j++) {
            min_c=b[0][j];
        for(i=1;i<n;i++)
        {

            if(min_c>b[i][j])
            min_c=b[i][j];
            else if(b[i][j]==0) break;
        }


        for(i=0;i<min_c;i++) counter++;
        for(i=0;i<min_c;i++) c+=n;

    }

    //printf ("%d    %d",total,c);

    if(total!=c) {
        printf("-1");
        return 0;
    }


    printf("%d\n",counter);


    for(i=0;i<n;i++) {

            min_r=a[i][0];
        for(j=1;j<m;j++)
        {

            if(min_r>a[i][j])
            min_r=a[i][j];
            else if(a[i][j]==0) break;
        }


        for(j=0;j<min_r;j++) printf("row %d\n",i+1);
        for(j=0;j<m;j++) {
                a[i][j]=a[i][j]-min_r;



        }

    }





    for(j=0;j<m;j++) {
            min_c=a[0][j];
        for(i=1;i<n;i++)
        {

            if(min_c>a[i][j])
            min_c=a[i][j];
            else if(a[i][j]==0) break;
        }


        for(i=0;i<min_c;i++) printf("col %d\n",j+1);


    }


  }

else if(row==false)
    {



    for(j=0;j<m;j++) {
            min_c=b[0][j];
        for(i=1;i<n;i++)
        {

            if(min_c>b[i][j])
            min_c=b[i][j];
            else if(b[i][j]==0) break;
        }


        for(i=0;i<min_c;i++) counter++;
        for(i=0;i<min_c;i++) c+=n;
        for(i=0;i<n;i++) {
                b[i][j]=b[i][j]-min_c;

        }


    }

        for(i=0;i<n;i++) {

        min_r=b[i][0];
        for(j=1;j<m;j++)
        {

            if(min_r>b[i][j])
            min_r=b[i][j];
            else if(b[i][j]==0) break;
        }
        for(j=0;j<min_r;j++) counter++;

        for(j=0;j<min_r;j++) c+=m;



    }








    //printf ("%d    %d",total,c);

    if(total!=c) {
        printf("-1");
        return 0;
    }


    printf("%d\n",counter);



    for(j=0;j<m;j++) {
            min_c=a[0][j];
        for(i=1;i<n;i++)
        {

            if(min_c>a[i][j])
            min_c=a[i][j];
            else if(a[i][j]==0) break;
        }


        for(i=0;i<min_c;i++) printf("col %d \n",j+1);
        for(i=0;i<n;i++) {
                a[i][j]=a[i][j]-min_c;

        }


    }




    for(i=0;i<n;i++) {

            min_r=a[i][0];
        for(j=1;j<m;j++)
        {

            if(min_r>a[i][j])
            min_r=a[i][j];
            else if(a[i][j]==0) break;
        }


        for(j=0;j<min_r;j++) printf("row %d\n",i+1);



        }

    }







}


