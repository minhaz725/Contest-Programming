#include <iostream>
using namespace std;
int main()
{
    int a[3][3],c[3][3],i,j,x;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) cin>>a[i][j];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) c[i][j]=0;

    for(i=0;i<3;i++)
     {

        for(j=0;j<3;j++)
        {
            x=a[i][j];
            while(x--)
            {
                if(c[i][j]==0) c[i][j]=1;if(c[i][j]==1) c[i][j]=0;
                if(i+1<3) {if(c[i+1][j]==0) c[i+1][j]=1;if(c[i+1][j]==1) c[i+1][j]=0;}
                if(i-1>-1) {if(c[i-1][j]==0) c[i-1][j]=1;if(c[i-1][j]==1) c[i-1][j]=0;}
                if(j+1<3) {if(c[i][j+1]==0) c[i][j+1]=1;if(c[i][j+1]==1) c[i][j+1]=0;}
                if(j-1>-1) {if(c[i][j-1]==0) c[i][j-1]=1;if(c[i][j-1]==1) c[i][j-1]=0;}
                if(i+1<3 && j+1<3) {if(c[i+1][j+1]==0) c[i+1][j+1]=1;if(c[i+1][j+1]==1) c[i+1][j+1]=0;}
                if(i-1>-1 && j+1<3) {if(c[i-1][j+1]==0) c[i-1][j+1]=1;if(c[i-1][j+1]==1) c[i-1][j+1]=0;}
                if(i+1<3 && j-1>0) {if(c[i+1][j-1]==0) c[i+1][j-1]=1;if(c[i+1][j-1]==1) c[i+1][j-1]=0;}
                if(i-1>-1 && j-1>0) {if(c[i-1][j-1]==0) c[i-1][j-1]=1;if(c[i-1][j-1]==1) c[i-1][j-1]=0;}


            }

        }



    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++) cout<<c[i][j];
            cout<<endl;
    }

        return 0;


}
