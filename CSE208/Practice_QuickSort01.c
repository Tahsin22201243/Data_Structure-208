#include<stdio.h>

int partition(int arr[],int left,int right)
{
    int pivot = arr[right];
    int i = left-1;

    for(int j=left; j<right; j++) //j=left
    {

        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
        }

    }
    int temp = arr[i+1];
    arr[i+1] = arr[right];
    arr[right]=temp;
    return i+1;

}



void quickSort(int arr[],int left,int right)
{

    if(left<right) //Focus on this line too
    {

    int pivot = partition(arr,left,right);
    quickSort(arr,left,pivot-1);
    quickSort(arr,pivot+1,right);

    }


}

int main()
{
    int a;
    printf("Enter Sorting Size:");
    scanf("%d",&a);
    int arr[a];

    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }

    quickSort(arr,0,a-1);

   printf("Sorted array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

