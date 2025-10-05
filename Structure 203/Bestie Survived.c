#include <stdio.h>

int main()
{
    char t[100];
    int top = -1,j;
    char stack[100];

    printf("Enter the sequence: ");
    scanf("%s",&t);

    //Equation
    while(j!='\0')
    {
        if (t[j] == '[' || t[j] == '(' || t[j] == '{')
        {
            top++;
            stack[top] = t[j];
        }
        else if (t[j] == ']' || t[j] == ')' || t[j] == '}')
        {

            if (top == -1)
            {
                printf("Adios!\n");
            }
            else if ((t[j] == ']' && stack[top] == '[') ||(t[j] == ')' && stack[top] == '(') ||(t[j] == '}' && stack[top] == '{'))
            {

                top--;
            }
            else
            {
                printf("Adios!\n");
            }
        }
        j++;
    }
    if (top == -1)
    {
        printf("Bestie Survived!!\n");
    }
    else
    {
        printf("Adios!\n");
    }

    return 0;
}
