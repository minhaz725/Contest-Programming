#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    string s;
    cin>>n>>m;
    cin>>s;
    char b[m][2];
    int a[m][2];
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++) cin>>a[i][j];
        for(j=0;j<2;j++) cin>>b[i][j];
    }



    int c,d,k;
    i=0;

    for(j=0;j<m;j++)
    {
        c=a[i][0]-1,d=a[i][1]-1;
        k=c;
        do
        {

            if(s[k]==b[i][0]) s[k]=b[i][1];
          //  cout<<s<<" "<<c<<" "<<d<<" "<<k;
            k++;

        } while(k<=d);
        i++;
      //  cout<<endl;
    }
    cout<<s;

    return 0;
}

