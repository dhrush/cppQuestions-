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

void deleteKey(int x)
{
    struct Node* s = head;
    struct Node* s1;
    while(s->data!=x && s->next!=NULL)
    {
        s1=s;
        s=s->next;
    }
    if(s->data == x)
    {
        s1->next = s1->next->next;
        free(s);
    }
}

void deleteNode(int position)
{
    struct Node* s = head;
    struct Node* s1;
    int location=1;
    while(s->next != NULL && location != position)
    {
        s1=s;
        s=s->next;
        location++;
    }
    if(location==position)
    {
        s1->next = s1->next->next;
        free(s);
    }
}

void deleteList()
{
    struct Node* s=head;
    struct Node* s1=s->next;
    while(s->next!=NULL || s1->next!=NULL)
    {
        free(s);
        s=s1->next;
        free(s1);
        s1=s->next;
    }
}

void findLength(struct Node* head)
{
    int len;
    struct Node* s = head;
    if(s==NULL)
        len=0;
    else
    {
        while(s!=NULL)
        {
            len++;
            s=s->next;
        }
    }
    std::cout<<len;
}

void getMiddle(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = head;
    if(head == NULL)
        std::cout<<"-1";
    else
    {
        int pCount=1;
        while(p!=NULL && p->next!=NULL /*&& p->next->next!=NULL*/)
        {
            q = q->next;
            p = p->next->next;
            pCount += 2;
        }
        if(pCount%2 == 0)
            std::cout<<q->next->data;
        else
            std::cout<<q->data;
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
    /*insertNode(100,6);
    printList(head);
    deleteKey(100);         //deletes first occurence of node with specific key
    printList(head);
    deleteNode(3);*/          //deletes noe at given position
    //deleteList();           //deletes entire list
    printList(head);
    //findLength(head);
    //printList(head);
    getMiddle(head);

    return 0;
}