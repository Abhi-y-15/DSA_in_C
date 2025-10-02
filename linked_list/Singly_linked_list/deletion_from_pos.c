#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head=NULL, *temp, *newnode, *prevnode;
    int choice = 1, count = 0, i = 0;
    while (choice)
    {
        newnode = (struct node *)(malloc(sizeof(struct node)));
        printf("Enter the data : \n");
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
        printf("Do you want to continue (0,1): \n");
        scanf("%d", &choice);
    }

    temp = head;
    int pos;
    printf("Enter the position which want to delete : ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Deletion not possible.");
    }
    else
    {
        while (i < pos - 1)
        {
            prevnode = temp;
            temp = temp->next;
            i++;
        }
        prevnode->next = temp->next;
        free(temp);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    return 0;
}