#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    first->data = 30;
    first->link = second;

    second->data = 23;
    second->link = third;

    third->data = 78;
    third->link = NULL;

    struct node *temp = first;

    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->link;
    }
}
