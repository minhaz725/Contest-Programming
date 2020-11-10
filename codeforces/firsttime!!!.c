#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    if(n <= m) cout << n;
    else {
        n -= m;
      	long long p = sqrt(2*n);
      	if((p*(p+1))/2 < n) ++p;
      	cout << m+p;
    }

    return 0;
}
