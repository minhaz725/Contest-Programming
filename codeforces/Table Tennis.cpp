#include <iostream>
using namespace std;

void winner(int a[],int n)
{
    int i,t=a[1];
    for(i=1;i<n-1;i++) a[i]=a[i+1];
    a[n-1]=t;


}


void loser(int a[],int n)
{
    int i,t=a[0];
    for(i=0;i<n-1;i++) a[i]=a[i+1];
    a[n-1]=t;


}

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++) cout<<a[i];

}
int main()
{
    //while(1){
    long long int n,k,p;
    cin>>p>>k;
    n=p;
    int a[n],i,j,c=0;
    for(i=0;i<n;i++) cin>>a[i];
    int maxi=a[0],indx=0;
    for(i=1;i<n;i++) if(a[i]>maxi) indx=i;
    if(indx<k) {cout<<a[indx];return 0;}
    while(1)
    {
        if(c>=k) {cout<<a[0];break;}
        int t;
        if(a[0]>a[1])
        {
        winner(a,n);
        c++;
        }
        else {loser(a,n);c=1;}
    }

//}
    //print(a,n);

}
