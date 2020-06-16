#include<iostream>

struct Node
{
    struct Node* next;
    int data;
};

struct Node* head = NULL;
struct Node* tmp;
void appendNode(int data)
{
    struct Node* newEntry = (struct Node*)malloc(sizeof(struct Node));
    newEntry->data = data;
    newEntry->next = NULL;
    if(head == NULL)
    {
       head = newEntry;
       tmp = newEntry;
    }
    else
    {
        tmp->next = newEntry;
        tmp = tmp->next;
    }
}

void printList(struct Node* ptr)
{
    while(ptr != NULL)
    {
        std::cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    appendNode(1);
    appendNode(2);
    appendNode(3);
    appendNode(4);
    appendNode(5);
    appendNode(6);
    printList(head);
    return 0;
}