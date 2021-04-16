#include <iostream>
using namespace std;
int main()
{
    int i,j,n,x;


    while(1)
    {
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    for(i=1;i<n;i++)//as we don't need 1st one to be checked ,i=1
    {
        x=a[i];//keeps the value which will be inserted
        j=i;
        while(j>0 && a[j-1]>x) //if problem in in 1 condition ,breaks
        {
            a[j]=a[j-1];//repositioning values due to condition
            j--;
        }
        a[j]=x;//after loop,a[j] will be empty so inserting the kept value
    }
    for(i=0;i<n;i++) cout<< a[i] <<" ";
    cout<<endl;
    }
    return 0;

}

