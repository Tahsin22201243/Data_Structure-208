
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *bfr;
    struct node *next;
};

struct node *head = NULL;
                 //Insert at Beginning
void beginsert()
{
    struct node *ptr;
    int item;
    ptr = malloc(sizeof(struct node));
    printf("\nEnter value\n");
    scanf("%d",&item);
    ptr->data = item;
    ptr->next = head;
    ptr->bfr = NULL;
    if (head != NULL)
        head->bfr = ptr;
    head = ptr;
    printf("\nNode insert");
}
                 //Insert at the end
void endinsert()
{
    struct node *New, *ptr = head;
    int item;

    New = malloc(sizeof(struct node));
    printf("\nEnter value\n");
    scanf("%d",&item);
    New->data = item;
    New->next = NULL;
    if (head == NULL)
    {
        New->bfr = NULL;
        head = New;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = New;
    New->bfr = ptr;
    printf("\nNode insert");
}
                       //Delete from Beginning
void deleteFromBeginning()
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    printf("\nNode deleted from beginning.");
}
                    //Delete From End
void deleteFromEnd() {
    struct node *ptr = head, *New = NULL;
    while(ptr->next !=NULL)
    {
        New = ptr;
        ptr = ptr->next;
    }
    New->next = NULL;
    free(ptr);
    printf("\nNode deleted from  end.");
}
                //Display Function
void display()
{
    struct node *ptr;
    ptr = head;

    printf("\nPrinting value\n");
    while (ptr!=NULL)
    {
        printf("%d-> ",ptr->data);
        ptr = ptr->next;
    }
}

int main ()
{
    int choice = 0;
    while (choice != 8)
    {
        printf("\nMain Menu\n");
        printf("------------");
        printf("\n1. Insert in beginning\n2. Insert in Ending\n3. Insert in Middle\n4. Delete from beginning\n5. Delete from end\n6. Delete from any specific position\n7. Show\n8. Exit\n");
        printf("\nEnter your choice? ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            endinsert();
            break;

        case 4:
            deleteFromBeginning();
            break;
        case 5:
            deleteFromEnd();
            break;

        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Enter valid choice.");
        }
    }
    return 0;
}
