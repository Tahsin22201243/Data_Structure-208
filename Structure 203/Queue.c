#include <stdio.h>
int main ()
{
//take stack size from the user as input
    int a,option,b;

    printf("Enter array size : " );
    scanf("%d",&a);
    int arr[a];

//declare the stack of that specified size


//declare a variable named as top, initially the value of top will be -1

    int rear=-1;
    int fornt =-1;
    int k=0;


    while(1)
    {
        printf("\n\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is Empty\n4 to check the Queue is Full\n0 to exit\n");
        scanf("%d",&option);
        if(option==1)
        {
            //If Top = maximum size of the stack then Print: Overflow and
            if(rear == a-1)
            {
                printf("Overflow");

            }


            //else ask user what value to push, name it as “push”
            //insert the specified number in the “top”-th index of the stack

            //increment the value of top by 1
            //print the stack

            else
            {
                printf("Enter the value: ");
                scanf("%d",&b);

                rear++;

                arr[rear] = b;
                for(int i=rear; i>= 0; i--)
                {
                    printf("The Queue value is: %d",arr[i]);
                }


            }



        }
        else if(option==2)
        {
//If top = -1 then Print: Underflow and Return.
//else decrement the value of top by 1
//insert a null in the “top”-th index
//print the stack

            if(rear==-1)
            {
                printf("Underflow.");

            }
            else
            {    fornt++;
                arr[fornt] = '/0';

                k++;
                for(int i=k; i<=rear; i++)
                {
                    printf("The Queue: %d",arr[i]);
                }
            }

        }
        else if(option==3)
        {
//return true(1) if stack is empty, false(0) otherwise{
            if(rear==-1)
            {
                printf("The Queue is  Empty"); //main problem
            }
            else
                printf("Queue is not Empty");


        }
        else if(option==4)
        {
//return true(1) if stack is Full, false(0) otherwise
            if(rear==a)
                printf("The Queue is not  Full");

            else
                printf("Queue is  Full");

        }
        else if(option==0)
        {
            printf("Exit");

        }
        else
            printf("Invalid input.\n");
    }

    return 0;
}


