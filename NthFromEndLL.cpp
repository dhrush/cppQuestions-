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
    std::cout<<"\n";
}

void NthfromEnd(struct Node* head,int n)
{
    struct Node* ref = head;
    struct Node* main = head;
    int count=0;
    while(count<=n)
    {
        ref = ref->next;
        count++;
    }
    while(ref != NULL)
    {
        main = main->next;
        ref = ref->next;
    }
    std::cout<<main->next->data<<"\n";
    
}



int main()
{
    appendNode(1);
    appendNode(2);
    appendNode(3);
    appendNode(4);
    appendNode(5);
    appendNode(6);
    appendNode(7);
    printList(head);
    NthfromEnd(head,3);

    return 0;
}