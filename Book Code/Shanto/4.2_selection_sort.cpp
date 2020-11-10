#include <iostream>
using namespace std;
int main()
{
    int i,j,t,n,mini;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cout<<a[i]<<" ";

    for(i=0;i<n-1;i++)
    {
        mini=i;
        for(j=i+1;j<n;j++)
        {
            if(a[mini]>a[j]) mini=j;
        }

                t=a[i];
                a[i]=a[mini];
                a[mini]=t;

    }



    for(i=0;i<n;i++) cout<<a[i]<<" ";


    return 0;


}
