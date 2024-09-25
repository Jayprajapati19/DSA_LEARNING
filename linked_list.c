#include <stdio.h>
#include <stdlib.h>

// Node structure
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

// Insert at the front of the linked list
void insertAtFront(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Insert at the end of the linked list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert in ascending order
void insertInAscendingOrder(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL || (*head)->data >= data)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL && temp->next->data < data)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete the first node
void deleteFirstNode(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Delete the node before the specified position
void deleteBeforePosition(struct Node **head, int pos)
{
    if (*head == NULL || pos <= 1)
    {
        printf("Invalid position!\n");
        return;
    }
    struct Node *temp = *head;
    struct Node *prev = NULL;
    struct Node *prevPrev = NULL;
    int count = 1;
    while (temp != NULL && count < pos)
    {
        prevPrev = prev;
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == NULL || prevPrev == NULL)
    {
        printf("Invalid position!\n");
        return;
    }
    prevPrev->next = prev->next;
    free(prev);
}

// Delete the node after the specified position
void deleteAfterPosition(struct Node **head, int pos)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = *head;
    int count = 1;
    while (temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Invalid position!\n");
        return;
    }
    struct Node *delNode = temp->next;
    temp->next = temp->next->next;
    free(delNode);
}

// Display the linked list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    int choice, data, pos;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert a node at the front\n");
        printf("2. Insert a node at the end\n");
        printf("3. Insert a node in ascending order\n");
        printf("4. Delete the first node\n");
        printf("5. Delete a node before a specified position\n");
        printf("6. Delete a node after a specified position\n");
        printf("7. Display the linked list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at front: ");
            scanf("%d", &data);
            insertAtFront(&head, data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;
        case 3:
            printf("Enter data to insert in ascending order: ");
            scanf("%d", &data);
            insertInAscendingOrder(&head, data);
            break;
        case 4:
            deleteFirstNode(&head);
            break;
        case 5:
            printf("Enter the position before which to delete: ");
            scanf("%d", &pos);
            deleteBeforePosition(&head, pos);
            break;
        case 6:
            printf("Enter the position after which to delete: ");
            scanf("%d", &pos);
            deleteAfterPosition(&head, pos);
            break;
        case 7:
            displayList(head);
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
