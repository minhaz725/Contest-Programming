#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
    vector<long long> v;
    long long x;
    while(1 == scanf("%lld",&x)) v.push_back(x);
    for(int i=v.size()-1;i>=0;i--) printf("%.4lf\n",sqrt(v[i]));
    return 0;
}
