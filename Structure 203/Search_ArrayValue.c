#include<stdio.h>
int main()
{   //Input one
    int me,b,target,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&me);

    int arr[me];
    printf("Enter the elements: ");
    for(int i=0;i<me;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Target to Search: ");
    scanf("%d",&target);

      //Calculation one
    int beg=0,end=me-1,mid;
    for(b=0;b<me;b++)
    {
      mid=(beg+end)/2; //Main formula

        if(target>arr[mid])
            beg=mid+1;

        if(target<arr[mid])
            end=mid-1;

        if(target==arr[mid])
        {
            found=1;
            break;
        }
    }    //Output One
    if(found==1)
        printf("Element %d is found at index %d\n", target, mid);
    else
        printf("Not found");

}

