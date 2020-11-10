
#include <iostream>
using namespace std;

int main()
{

    int array[100], size, i, j,c=0;

  //  printf("Enter number of elements in array\n");
    cin>>size;
    //printf("Enter %d numbers\n", size);

    for(i = 0; i < size; i++)   cin>>array[i];

    //printf("Unique Elements\n");
    for(i = 0; i < size; i++)
    {
        for (j=0; j<i; j++)
        {
            if (array[i] == array[j])
                break;
        }

        if (i == j)
        {
            /* No duplicate element found between index 0 to i */
      //      cout<<array[i];
            c++;
        }
    }
    //cout<<c;


}
