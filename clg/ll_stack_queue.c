#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node *temp;

struct node *createnode()
{
    int x;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory not available\n");
        return NULL;
    }
    else
    {
        printf("Enter Value: ");
        scanf("%d", &x);
        temp->data = x;
        temp->next = NULL;
    }
    return temp;
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: \n");
    for (temp = front; temp != NULL; temp = temp->next)
    {
        printf("%d\n", temp->data);
    }
}

void enqueue()
{
    struct node *newNode = createnode();
    if (newNode == NULL)
        return;

    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    display();
}

void dequeue()
{
    if (front == NULL)
    {

        printf(" Queue  empty\n");
    }
    else
    {
        temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        printf(" Dequeued element: %d\n", temp->data);
        free(temp);
    }
    display();
}

void peep()
{
    if (front == NULL)
    {
        printf("Queue  empty\n");
    }
    else
    {
        printf("Front element is: %d\n", front->data);
    }
}

void main()
{
    int choice;
    printf("\n 1. Enqueue\n 2. dequeue\n 3. peep \n 4. Exit\n");

    do
    {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peep();
            break;
        default:
            printf("Enter a valid number\n");
        }
    } while (choice != 4);
}
