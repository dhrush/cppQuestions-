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

void delEveryKth(struct Node* head, int k)
{
    if(head == NULL)
    {
        std::cout<<"null";
    }
    else
    {
        struct Node* p = head;
        struct Node* tmp = head;
        int count = 1;
        while(p != NULL)
        {
            if(count%k == 0)
            {
                //deleting the node
                tmp->next = p->next;
                free(p);
                p = tmp->next;
                count++;
            }
            else
            {
                tmp = p;
                p = p->next;
                count++;
            }
        }
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
    appendNode(7);
    appendNode(8);
    appendNode(9);
    printList(head);
    delEveryKth(head,3);
    printList(head);

    return 0;
}