#include <iostream>
using namespace std;


void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}


	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}

// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}





#include <algorithm>

int main()
{
    int i,j,a[6];
    for(i=0;i<6;i++) cin>>a[i];
    int mn=a[0];
    int mx=a[0];
    MergeSort(a,0,5);
    int x,y;

    do {
   // cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ' << a[4] << ' ' << a[5] << '\n';
    x=a[0]+a[1]+a[2];
    y=a[3]+a[4]+a[5];
    //cout<<x<<"  " <<y<<endl;
    if(x==y) {cout<<"YES";return 0;}

  } while (std::next_permutation(a,a+6) );



    cout<<"NO";

    //for(i=0;i<6;i++) cout<<a[i]<<"\t";
    return 0;
}





