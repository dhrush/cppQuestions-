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

struct Node* getPointer(struct Node* s, int data)
{
  struct Node* p = head;
  while(p->data != data && p!= NULL)
  {
    p=p->next;
  }

  if(p->data == data){return p;}

}

void delWithoutHead(struct Node* p)
{
  struct Node* tmp = p;
  tmp = tmp->next;
  p->data = tmp->data;
  p->next = tmp->next;
  free(tmp);

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
    struct Node* del = getPointer(head,6);
    delWithoutHead(del);
    printList(head);

    return 0;
}