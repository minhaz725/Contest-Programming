#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];

    sort(x, x+n);
    if(x[0]>=0) {cout<<"Yes";return 0;}
    for(int i=0;i<n;i++) y[i]=x[i];
    y[0]=0;
    sort(y, y+n);
    if(y[0]>=0) {cout<<"Yes";return 0;}
    else{

    sort(x, x+n , greater<int>());
    if(x[0]<=0) {cout<<"Yes";return 0;}
    for(int i=0;i<n;i++) y[i]=x[i];
    y[0]=0;
    sort(y, y+n , greater<int>());
    if(y[0]<=0) {cout<<"Yes";return 0;}
    }
    cout<<"No";
    //for(int i=0;i<n;i++) cout<<x[i]<<endl;

    return 0;


}
