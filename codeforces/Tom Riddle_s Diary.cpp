#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin>> n;

    char a[n][1000];

    for(i=0;i<n;i++)  cin>> a[i] ;

    int c[n];
    for(i=0;i<n;i++) c[i]=0;
    for(i=0;i<n-1;i++)

    {
    for(j=i+1;j<n;j++) {int comp ;comp=strcmp(a[i],a[j]) ;if(comp==0) c[j]++;}//cout << comp <<"\t"<< "j =" << j << "\t" << "c[j]" << c[j] << "\t"<< a[i] <<"\t" << a[j] <<endl; }
    }

    for(i=0;i<n;i++) {if(c[i]!=0) cout<< "YES"<<endl; else cout<< "NO"<<endl;}


}
