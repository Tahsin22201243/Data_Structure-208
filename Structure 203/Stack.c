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

    int Top=-1;


    while(1)
    {
        printf("\n\nType..\n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check the stack is Full\n0 to exit\n");

        scanf("%d",&option);
        if(option==1)
        {
            //If Top = maximum size of the stack then Print: Overflow and
            if(Top == a-1)
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
                Top++;
                arr[Top] = b;
                for(int i=Top; i>= 0; i--)
                {
                    printf("The Stack value is: %d",arr[i]);
                }


            }



        }
        else if(option==2)
        {
//If top = -1 then Print: Underflow and Return.
//else decrement the value of top by 1
//insert a null in the “top”-th index
//print the stack

            if(Top==-1)
            {
                printf("Underflow.");

            }
            else
            {
                arr[Top] = '/0';
                Top--;
                for(int i=0; i<Top; i++)
                {
                    printf("The Stack: %d",arr[i]);
                }
            }

        }
        else if(option==3)
        {
//return true(1) if stack is empty, false(0) otherwise{
            if(Top==-1)
            {
                return 1;
            }
            else
                return 0;


        }
        else if(option==4)
        {
//return true(1) if stack is Full, false(0) otherwise
            if(Top==a)

                return 1;

            else

                return 0;
        }
        else if(option==0)
        {
            return 0;

        }
        else
            printf("Invalid input.\n");
    }

    return 0;
}
