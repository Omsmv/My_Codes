#include <stdio.h>
#include <stdlib.h>
struct linked_list
{
  int number;
  struct linked_list *next;
};
  typedef struct linked_list node;

void create(node *list);
void print(node *list);
node* find(node *list,int key);
node* insert(node *head,int value,int key);
node* delete(node *head,int value,int key);
void sort(node *head);


void main()
{
  node *head;
  head=(node*)malloc(sizeof(node));

  create(head);
  print(head);
  /* int value;int key;
   printf("Enter value of element to be inserted\n");
   scanf("%d",&value);
   printf("Enter key\n");
   scanf("%d",&key);

  head= insert(head,value,key);
   print(head);

   printf("Enter the element to be deleted\n");
   scanf("%d",&value);
   

   printf("Enter th element after which the element is to be deleted\n");
   scanf("%d",&key);
delete(head,value,key);
print(head);*/

 
}

void create(node *list)
{
  printf("Enter a number (-1 to exit)\n");
  scanf("%d",&list->number);

  if(list->number==-1)
    list->next=NULL;
  else
    {
     list->next=(node*)malloc(sizeof(node));
      create(list->next);
    }
}

void print(node *list)
{
  if(list->next!=NULL)
    {
      printf("%d\n",list->number);
      print(list->next);
    }
}
node* find(node *list,int key)
{
  if(list->number==key)
    return list;
  else
    {
      list++;
      find(list,key);
    }
}
    


node* insert(node *head,int value,int key)
{
  if(key==-1)
    {
      node* nhead=(node*)(malloc(sizeof(node)));

      nhead->number=value;
      nhead->next=head;
      return nhead;
    }
  else
    {
     node *nnode=(node*)(malloc(sizeof(node)));
  nnode->number=value;

  node *knode=find(head,key);

  nnode->next=knode->next;
  knode->next=nnode;
  return head;
    }
}

node* delete(node *head,int value,int key)
{
  if(key==-1)
    {
      head=find(head,value);
      return head;
    }
  else
  {
    node *knode=find(head,value);
    node *n1node= find(head,key);
    n1node->next=knode->next;
    return head;
  }
}

int count(node *list)
{
  if(list->next==NULL)
    return 0;
  else
    return 1+count(list->next);
}


	      
	  
  


  
  
  
