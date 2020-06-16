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

void insertNode(int dataInsert, int dataBefore)
{
    //insert Node with data x before node with data y
    
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = dataInsert;
    p->next = NULL;
    
    struct Node* s = head;
    struct Node* s1;
    while(s->data!=dataBefore && s->next!=NULL)
    {
        s1 = s;
        s = s->next;
    }
    if(s->data == dataBefore)
    {
        s1->next = p;
        p->next = s;
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
    insertNode(100,6);
    printList(head);
    return 0;
}