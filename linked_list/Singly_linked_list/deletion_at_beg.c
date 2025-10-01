#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node {
        int data ;
        struct node * next ;
    };

    struct node *head = NULL , *temp , *newnode ;
    int choice = 1 ;
    while (choice)
    {
       newnode = (struct node*)(malloc(sizeof(struct node)));
       printf("Enter the data : ");
       scanf("%d",&newnode->data);
       newnode->next = NULL;
       if (head == NULL)
       {
        head = newnode ;
        temp = newnode;
       }
       else{
        temp->next = newnode ;
        temp = newnode ;
       }
       printf("Do you want to continue (0,1): ");
       scanf("%d",&choice);  
    }

    //Deletion from beg:

    temp = head ;
    head = temp->next ;
    free(temp) ;
    temp = head ;
    while (temp != NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next ;
    }
    return  0 ;

}