#include <iostream>
#include <stdlib.h>
using namespace std;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int cmpfunc_ (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main()
{
    unsigned long long int k, largest;

    int i;
    cin>>k;
    unsigned long long int array[k],a[k],b[k];

    for(i=0;i<k;i++) {cin>> array[i];a[i]=b[i]=array[i];}

    qsort(a,k,sizeof(int),cmpfunc);
    qsort(b,k,sizeof(int),cmpfunc_);

    for(i=0;i<k;i++) {cout<< a[i]  ;cout<<b[i]  ;cout  << "\n";}

    for(i=0;i<k;i++)
    {

        if   ( (array[i]!=a[i]) && (array[i]!=b[i]) ) {cout << 0;return 0;}
    }
    largest = array[0];
    for (i = 1; i < k; i++)
    {
        if (largest < array[i])
            largest = array[i];
    }
    cout << largest-25;

    return 0;
}

