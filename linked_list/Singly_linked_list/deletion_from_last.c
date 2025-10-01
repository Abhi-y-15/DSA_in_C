#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node {
        int data ;
        struct node* next ;
    };
    struct node* head = NULL , *temp , *newnode , *prevnode;
    int choice = 1 ;
    while(choice){
        newnode  = (struct node*)(malloc(sizeof(struct node)));
        printf("Enter the data : \n");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode ;
            temp = newnode ;
        }
        else{
            temp->next = newnode ;
            temp = newnode ;
        }
        printf("Do you want to continue (0,1) : ");
        scanf("%d",&choice);
    }
    temp = head ;
    while (temp->next!=NULL)
    {
        prevnode = temp ;
        temp = temp->next;
    }
    if (head == temp){
        head = NULL;
    }
    else
    {
       prevnode->next = NULL;
    }
    free(temp);
    
    temp = head;

    while(temp!= NULL){
        printf("%d\t",temp->data);
        temp= temp->next;
    }
    return 0 ;
}