#include <stdio.h>
int main()
{
    // Input one
    int t;
    printf("Enter size: ");
    scanf("%d", &t);

    int arr[t];

    printf("Enter elements:\n");
    for (int i=0;i<t;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    // search for target
    int x;
    printf("Search for target: ");
    scanf("%d",&x);

    int beg=0,end=t-1,result=0;
    //Calculation part
    while (beg <= end)
    {
        int mid=beg+(end-beg)/2;

        if (arr[mid]==x)
        {
            result=mid;// Target found than break
            break;
        }
        if (arr[beg]<=arr[mid])
        {
            if (x>=arr[beg]&&x<arr[mid])
                end=mid-1;
            else
            beg=mid+1;
        }
        else
        {
            if (x>arr[mid]&&x<=arr[end])
                beg=mid+1;
            else
                end=mid-1;
        }
    }
    //Output value
    if (result!=0)
        printf("Element %d found at index %d\n", x, result);
    else
        printf("-1\n");
}

