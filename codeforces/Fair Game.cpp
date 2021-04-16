#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];

    for(i=0;i<=1;i++)   cin>>a[i];

    int x=a[0],y=a[1],xc=1,yc=1;
    bool c=false;
    if(x==y) {c=true;xc=2;yc=0;}
    if(n==2 && x!=y)
    {
        cout << "YES" <<endl;
        cout << x <<" "<< y <<endl;
        return 0;
    }
    else if(n==2 && x==y) {cout << "NO";return 0;}
    else if(n>2)
    {
        for(i=2;i<n;i++)
        {
            cin>> a[i];
            if(c==false && (a[i]!=x && a[i]!=y)) {cout<< "NO" <<endl;return 0;}
            else if(c==true && (a[i]!=x && a[i]!=y)) {y=a[i];c=false;}
            if(a[i]==x) xc++;
            if(a[i]==y && c==false) yc++;

        }
        if(xc!=yc || c==true ) cout << "NO" << endl; //x=" << x << " " << xc << " y= " << y << " " << yc << endl;
        else{
        cout << "YES" <<endl;
        cout << x <<" "<< y <<endl; }
        return 0;

    }

}
