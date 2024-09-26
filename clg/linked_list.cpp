#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Push operation for stack (insert at the beginning of linked list)
void push(struct Node **top, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *top; // Point the new node to the current top
    *top = newNode;       // Update top to the new node
    printf("%d pushed to stack\n", data);
}

// Pop operation for stack (remove the node from the beginning)
int pop(struct Node **top)
{
    if (*top == NULL)
    {
        printf("Stack Underflow\n");
        return -1; // Return -1 if stack is empty
    }
    struct Node *temp = *top;
    int popped = temp->data;
    *top = (*top)->next; // Update top to the next node
    free(temp);          // Free the memory of the popped node
    return popped;
}

// Display the stack (linked list)
void display(struct Node *top)
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    struct Node *temp = top;
    printf("Stack elements: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to test the stack using linked list
int main()
{
    struct Node *top = NULL; // Initialize the stack (top of the linked list)

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    printf("Popped element: %d\n", pop(&top));
    display(top);

    return 0;
}
