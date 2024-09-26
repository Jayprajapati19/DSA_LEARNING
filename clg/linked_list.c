#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *first = NULL, *temp;

struct node *createnode()
{
    int x;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory is not available");
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
    printf("Elements in linked list : \n");
    for (temp = first; temp != NULL; temp = temp->next)
    {
        printf("%d\n", temp->data);
    }
}

void main()
{
    struct node *New, *temp2;
    int choice;
    printf("\n1. Insert at First\n2. Insert at Last\n3. Delete at first\n4. Delete at last\n5. Exit\n");
    do
    {
        printf("Enter: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            New = createnode();
            if (first == NULL)
            {
                first = New;
            }
            else
            {
                New->next = first;
                first = New;
            }
            display();
            break;
        case 2:
            New = createnode();
            if (first == NULL)
            {
                first = New;
            }
            else
            {
                for (temp = first; temp->next != NULL; temp = temp->next)
                    ;
                temp->next = New;
            }
            display();
            break;
        case 3:
            if (first == NULL)
            {
                printf("Linked List Is Empty\n");
            }
            else
            {
                temp = first;
                first = first->next;
                free(temp);
            }
            display();
            break;
        case 4:
            if (first == NULL)
            {
                printf("Linked List Is Empty\n");
            }
            else
            {
                for (temp = first; temp->next->next != NULL; temp = temp->next)
                    ;
                temp2 = temp->next;
                free(temp2);
                temp->next = NULL;
            }
            display();
            break;
        case 5:
            break;
        default:
            printf("Enter the valid number \n");
        }
    } while (choice != 5);
}