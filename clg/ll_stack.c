#include <stdio.h>
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
        printf(" Memory not available");
    }
    else
    {
        printf(" Enter Value: ");
        scanf("%d", &x);
        temp->data = x;
        temp->next = NULL;
    }
    return temp;
}

void display()
{
    printf("  Stack : \n");
    for (temp = first; temp != NULL; temp = temp->next)
    {
        printf("%d\n", temp->data);
    }
}

int main()
{
    struct node *New;
    int choice;
    printf("\n  1. push\n 2. pop\n 3. peep\n 4. exit\n");
    do
    {
        printf(" enter  choice : ");
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
            if (first == NULL)
            {
                printf(" Stack  Empty\n");
            }
            else
            {
                temp = first;
                first = first->next;
                free(temp);
            }
            display();
            break;

        case 3:
            if (first == NULL)
            {
                printf("Stack  Empty\n");
            }
            else
            {
                printf("Top element : %d\n", first->data);
            }
            break;

        default:
            printf("enter valid choice \n");
        }
    } while (choice != 4);
}