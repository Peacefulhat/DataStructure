#include"list.h"
static int lsize;
static struct node*head=NULL;
static struct node*tail=NULL;

struct node*hadd(){return head;}
void insertFront(TYPE value){
  struct node*nodePtr=(struct node*)malloc(sizeof(struct node));
  nodePtr->data=value;
  nodePtr->next=NULL;
  if(head==NULL&&tail==NULL){
    head=nodePtr;
    tail=nodePtr;
  }else{
    nodePtr->next=head;
    head=nodePtr;
  }
  lsize++;
}


void insertEnd(TYPE value){
  struct node*nodePtr=(struct node*)malloc(sizeof(struct node));
  nodePtr->data=value;
  nodePtr->next=NULL;
  if(head==NULL&&tail==NULL){
    head=nodePtr;
    tail=nodePtr;
  }else{
    tail->next=nodePtr;
    tail=nodePtr;
  }
  lsize++;
}


void insertAt(TYPE value,int pos){
  struct node*nodePtr=(struct node*)malloc(sizeof(struct node));
  nodePtr->data=value;
  nodePtr->next=NULL;
  if(head==NULL&&tail==NULL){
    head=nodePtr;
    tail=nodePtr;
  }else{
    struct node*temp=head;
    if(pos==1){
      nodePtr->next=head;
      head=nodePtr;
      lsize++; 
      return;
    }
    for(int i=1;i<pos-1;i++){
      temp=temp->next;
    }
    nodePtr->next=temp->next;
    temp->next=nodePtr; 
  }
  lsize++;
}


void deleteAt(int pos){
  struct node*current=head,*prev;
  if(head==NULL){return;}
  if(head->next==NULL){
    head=tail=NULL;
    free(current);
    lsize--;
    return;
  }
  for(int i=1;i<pos;i++){
    prev=current;
    current=current->next;
  }
  prev->next=current->next;
  lsize--;
  free(current);
}


void deleteFront(){
  struct node*temp=head;
  if(head==NULL&&tail==NULL){return;}
  if(head==tail){
    head=tail=NULL;
  }else{
    head=temp->next;
  }
  free(temp);
  lsize--;
}


void deleteEnd(){
  struct node*prev,*temp=head;
  if(head==NULL&&tail==NULL){return;}
  if(head==tail){
    head=tail=NULL;
  }else{
    while(temp->next!=NULL){
      prev=temp;
      temp=temp->next;
    }
    prev->next=NULL;
    tail=prev;
  }
  free(temp);
  lsize--;
}


void display(){
  struct node*temp=head;
  printf("list: ");
  while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next; 
  }
  printf("NULL\n");
}


bool search(TYPE value){
  struct node*it=head;
  while(value!=it->data&&it!=NULL){
    it=it->next;
  }
  return (it->data)==value?1:0;
}


void update(TYPE value,int pos){
  struct node*it=head;
  for(int i=1;i<pos-1;i++){
    it=it->next;
  }
  it->data=value;
}


inline int size(){return lsize;}

struct node* reverseRecursive(struct node*current,struct node*previous){
  if(current==NULL){
    return NULL;
  }
  reverseRecursive(current->next,current);
  current->next=previous;
  return current;
}
void print(struct node*value){
printf("%d",value->data);
}
