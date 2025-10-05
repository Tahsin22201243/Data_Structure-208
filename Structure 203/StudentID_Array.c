#include<stdio.h>
int main()
{   //Input the value One
    int t1,t2;
    printf("Enter the number of students: ");
    scanf("%d",&t1);
    int arr[t1];
    for(int i=1; i<=t1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=t1; i++)
    {
        printf("Student %d Id: %d\n",i,arr[i]);
    }



    //linear Search
    int key,loc=-1,count=0,flag=0;
    printf("Enter the target ID to search: ");
    scanf("%d",&key);
    printf("Occurrences of Student ID %d:\n",key);
    for(int k=1; k<=t1; k++)
    {
        flag++;
        if(arr[k]==key) //Target if equal to array
        {
            loc=k;
            printf("Index: %d\n",loc);

            count++;
        }
    }
       //Output one
    printf("Total occurrences: %d\n",count);
    printf("Total comparisons made: %d\n",flag);
}


