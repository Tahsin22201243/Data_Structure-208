#include<stdio.h>

int merge(int arr[],int left,int mid,int right)
{

//First give range
    int range1 = mid-left+1;
    int range2 = right-mid;

//then Declare the array
    int leftArr[range1], rightArr[range2];

//Take the left right value

    for(int i=0; i<range1; i++)
    {

        leftArr[i] =arr[left+i]; //leftArr[i] = not leftArr[left+i]
    }

    for(int j=0; j<range2; j++)
    {

        rightArr[j] = arr[mid+1+j];

    }
    int i=0,j=0,k=left;
    while(i<range1 && j<range2)
    {
        if(leftArr[i]<=rightArr[j])
        {

            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];

            j++;
        }
        k++;
    }
    while(i<range1)
    {
        arr[k] = leftArr[i];
        i++,k++;
    }

    while(j<range2)
    {
        arr[k] = rightArr[j];
        j++,k++;
    }


}
void mergeSort(int arr[],int left,int right)  //catching value ass parameter
{

    if(left<right) //logic must be this
    {

        int mid = left + (right-left)/2;
        merge(arr,left,mid,right); //returning value to Function
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);

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

    mergeSort(arr,0,a-1);

    printf("Sorted array: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

