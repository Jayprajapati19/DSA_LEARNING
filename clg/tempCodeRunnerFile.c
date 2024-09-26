#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// insert at the top
void push(struct Node **top, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("%d push to stack.\n", value);
}

// Pop operation
void pop(struct Node **top)
{
    if (*top == NULL)
    {
        printf("Stack empty\n");
        return;
    }
    struct Node *temp = *top;
    *top = (*top)->next;
    printf("%d pop  .\n", temp->data);
    free(temp);
}

// view the top element
void peep(struct Node *top)
{
    if (top == NULL)
    {
        printf(" empty\n");
    }
    else
    {
        printf("Top element : %d\n", top->data);
    }
}

int main()
{
    struct Node *stack = NULL;
    int choice, value;

    do
    {
        printf("\n1. Push\n2. Pop\n3. Peep\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&stack, value);
            break;
        case 2:
            pop(&stack);
            break;
        case 3:
            peep(stack);
            break;
        case 4:
            printf("Exit\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
