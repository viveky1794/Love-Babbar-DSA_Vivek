
#include <stdio.h>
#include <stdlib.h>

struct _node
{
    int id;
    struct _node *next;

};

struct _node* insertNode(struct _node *head, int val)
{
    struct _node *temp = head;

    if( !temp )
    {
        struct _node *newNode = (struct _node *)malloc(sizeof(struct _node) );
        newNode->id = val;
        newNode->next = NULL;

        temp = newNode;
        head = temp;
    }
    else
    {
        struct _node *newNode = (struct _node *)malloc(sizeof(struct _node) );
        newNode->id = val;
        newNode->next = NULL;

        while( temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        
    }
    
return head;
}


int main()
{
    struct _node *head = NULL;


    head = insertNode(head, 1);
    head = insertNode(head,2);

    while( head )
    {
        printf("id : %d, add : %p\n", head->id, head->next);
        head = head->next;
    }
}
