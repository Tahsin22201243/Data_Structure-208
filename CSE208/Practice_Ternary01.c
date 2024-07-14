#include<stdio.h>
int ternarySearch(int arr[],int b,int left,int right){

    if(right >=left)
    {

        int mid1 = left + (right-left)/3;
        int mid2 = right - (right-left)/3;


        if (b == arr[mid1])
        {
            return mid1;
        }

        if (b == arr[mid2])
        {
            return mid2;
        }

        if(b < arr[mid1])
        {
            return ternarySearch(arr,b,left,mid1-1);
        }
        else if(b > arr[mid2])
        {

            return ternarySearch(arr,b,mid1+1,right);
        }
        else
        {

            return ternarySearch(arr,b,mid1+1,mid2-1);
        }
    }
    return -1;

}
int main ()
{

    int a,b;

    printf("Enter the size:");

    scanf("%d",&a);
    int arr[a];

    for(int i=0; i<a; i++)
    {
        scanf("%d/n",&arr[i]);
    }
    /*for(int i=0; i<a; i++)
    {
        printf("The array are: %d\n",arr[i]);
    }*/
    printf("Enter Target");
    scanf("%d",&b);

    int result = ternarySearch(arr,b,0,a-1);

    printf("The Ternary Value: %d\n",result);
    return 0;

}
