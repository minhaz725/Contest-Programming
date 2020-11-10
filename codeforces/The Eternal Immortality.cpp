#include <iostream>
using namespace std;
int main()
{
    unsigned long long int a,b,x,i,j;
    cin>>a>>b;
    x=b-a;
    //cout<<a<<endl;
    //cout<<b<<endl;
    //cout<<x<<endl;
    if(x==0) cout<<1;
    else if((b%5==0 && b%2!=0) && a==b-1) cout << 5;
    else if(x>4 || b%5==0) {cout<<0;return 0;}
    else
    {

        long long int a[x];
  //      cout<<x<<endl;
        for(i=b-x+1,j=0;i<=b;i++,j++)
        {
            a[j]=i;
//cout<<c<<endl;

        }
      //  for(i=0;i<x;i++) cout<<a[i];
        for(j=0;j<x;j++)

        {
            for(i=0;;i++) {if(a[j]<10) break;a[j]=a[j]%10;}
//cout<<c<<endl;
        }
        int c=1;
        for(i=0;i<x;i++) c=c*a[i];
        for(j=0;j<x;j++)


            for(i=0;;i++) {if(c<10) break;c=c%10;}
//cout<<c<<endl;



        cout<<c;
        return 0;
    }
}

