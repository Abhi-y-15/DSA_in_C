#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)(malloc(sizeof(struct node)));
        printf("Enter the  data : ");
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
        printf("Do you want to add more linked lists (0 ,1): ");
        scanf("%d", &choice);
    }

    temp = head; // to make the list as a given list ;

    newnode = (struct node *)(malloc(sizeof(struct node)));
    printf("Enter the  data you want to insert the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    printf("Printing the node : ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
