#include <iostream>
#include <fstream>
using namespace std;

int cal(int i,int j)
{
    int c=0,d=0,n;
   while(1)
   {
    n=i;
    if(n>j) break;
    c=0;
    //cout<<n<<"  ";
    while(1)
    {
        if(n<=1) break;
        if(n%2==0) n=n/2;//cout<<n<<"  ";}
        else n=3*n+1;//cout<<n<<"  ";}
        c++;

    }
   //cout<<endl;
    if(c>d) d=c;
    i++;


   }
   return (d+1);
}

int main()
{
    int m,n;
   //fstream txt;
  //txt.open("out.txt");
    while(cin>>m>>n)
    {
       cout<<m<<" "<<n<<" ";
     //txt<<m<<" "<<n<<" ";
        if(m>n)
        {
            int t;
            t=m;
            m=n;
            n=t;
        }
   cout<<cal(m,n)<<endl;
   //txt<<cal(m,n)<<endl;
    }

 //   txt.close();
    return 0;

}
