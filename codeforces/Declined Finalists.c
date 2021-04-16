#include <iostream>
using namespace std
int main()
{
    unsigned long long int k, largest;

    int i;
    cin>>k;
    unsigned long long int array[k];

    array::cin >> array
     for(i=0;i<k-1;i++)
    {
        if(array[i]>array[i+1])
        {
            printf("0");
            return 0;
        }
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
