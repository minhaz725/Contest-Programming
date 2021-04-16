#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    long long int n,p,q,r;
    int i;
    cin >> n >> p >> q >>r;
    long long int a[n];
    for(i=0;i<n;i++) cin >> a[i];
    //for(i=0;i<n;i++) cout << a[i]<< "\t";
    long long int maxi=a[0],mini=a[0],c=0,amax,amin;

    for (i = 0 ; i < n ; i++)
    {
        if (a[i] > maxi)
        maxi = a[i];
        //cout << maxi << endl;
    }
   // cout << maxi << endl;

    for (i = 0 ; i < n ; i++)
    {
        if (a[i] < mini)
        mini = a[i];
        //cout << maxi << endl;
    }

    //cout << mini << endl;
    amax=llabs(maxi);
    amin=llabs(mini);
    long long int t=maxi;
    if(amax > maxi) {maxi=amin*mini/amin;
                    mini=amax*t/amax;}

    //cout<< maxi << "\t" << mini<<endl;


    int sign[5];
    if(p > 0) sign[0]=1;else sign[0]=-1;
    if(q > 0) sign[1]=1;else sign[1]=-1;
    if(r > 0) sign[2]=1;else sign[2]=-1;
    if(maxi > 0) sign[3]=1;else sign[3]=-1;
    if(mini > 0) sign[4]=1;else sign[4]=-1;

    if(sign[0]==sign[3]) c=c+p*maxi;
    else c=c+p*mini;
    if(sign[1]==sign[3]) c=c+q*maxi;
    else c=c+q*mini;
    if(sign[2]==sign[3]) c=c+r*maxi;
    else c=c+r*mini;

    cout<< c<<endl;

    return 0;

}

