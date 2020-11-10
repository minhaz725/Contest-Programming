#include <iostream>
using namespace std;
 int main() {
  /* code */
  	int n;
	cin >> n;
	int s[n], d[n];
	for(int i=0; i<n; ++i) cin >> s[i] >> d[i];

	int day = 0;
	for(int i=0; i<n; ++i) {
		if(day < s[i]) day = s[i];
		else {
			int k = (day - s[i]) / d[i] + 1;
			int temp = s[i] + k * d[i];
			day = temp;
		}
	}

	cout << day;


  return 0;
}


