#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp;
    int choice = 1, count = 0;

    // Creating linked list
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        count++;
        printf("Do you want to add more nodes (0/1): ");
        scanf("%d", &choice);
    }

    // Insertion at given position
    int pos, i = 1;
    printf("Enter the position where you want to insert the data: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count + 1)
    {
        printf("Insertion not possible.\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data to insert: ");
        scanf("%d", &newnode->data);

        if (pos == 1) // Insert at beginning
        {
            newnode->next = head;
            head = newnode;
        }
        else // Insert at middle or end
        {
            temp = head;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    // Printing list
    printf("Printing the nodes: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
