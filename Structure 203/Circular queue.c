
#include <stdio.h>

int main() {
    int t, option, value;
    printf("Enter the size: ");

    //Declare Size
    scanf("%d", &t);

    int Queue[t];
    int rear = -1;
    int front = -1;

    while (1) {
        printf("\nType..\n1 to push\n2 to pop\n3 to check if the Queue is Empty\n4 to check the Queue is Full\n0 to exit\n");
        scanf("%d", &option);

        if (option == 1) {
            if ((rear + 1) % t== front) {
                printf("Over Flow\n");
            } else {
                printf("Enter the value: ");
                scanf("%d", &value);
                if (rear == -1 && front == -1)
                    rear = front = 0;
                else
                    rear = (rear + 1 == t) ? 0 : rear + 1;
                Queue[rear] = value;
                printf("Inserted %d\n", value);
            }
        } else if (option == 2) {
            if (front == -1) {
                printf("Underflow\n");
            } else {
                printf("Deleted %d\n", Queue[front]);
                if (front == rear)
                    front = rear = -1;
                else
                    front = (front + 1 == t) ? 0 : front + 1;
            }
        } else if (option == 3) {
            if (front == -1)
                printf("Queue is empty\n");
            else
                printf("Queue is not empty\n");
        } else if (option == 4) {
            if ((rear + 1 == t ? 0 : rear + 1) == front)
                printf("Queue is full\n");
            else
                printf("Queue is not full\n");
        } else if (option == 0) {
            return 0;
        } else {
            printf("Invalid input.\n");
        }
    }
    return 0;
}
