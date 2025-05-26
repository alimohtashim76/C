#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
    int data;
    struct node* next;
}node;

node * head = NULL;
node * tail = NULL;
node * temp = NULL;




void addNode(int data)
{
    node* newNode = (node*) malloc(sizeof(node));

    newNode ->data = data;
    newNode ->next = NULL;
    
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;

    }
    

}

void printLL()
{
    temp = head; 
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    

}


int main()
{
    addNode(89);
    addNode(90);
    addNode(90);
    addNode(88);
    addNode(3);

    printLL();



}