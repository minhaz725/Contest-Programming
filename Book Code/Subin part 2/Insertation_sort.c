#include <stdio.h>
void insert_sort(int arr[], int n)
{
    int i,j,k;
    for (i=1; i<n; i++)
    {
        k=arr[i];
        j=i-1;
        for(;j>=0 && arr[j]>k ; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=k;
    }
}

int main()
{
    int i,a[8]={3,2,1,0,13,5,78,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    insert_sort(a,n);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;

}
