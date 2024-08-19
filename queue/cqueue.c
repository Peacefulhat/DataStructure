#include"cqueue.h"
#define QUEUESIZE 1
static TYPE queue[QUEUESIZE];
static TYPE front=-1,rear=-1;
static TYPE counter=0;

inline bool isEmpty(){
  return front&&rear==-1;
}

inline bool cisFull(){
  return (rear+1)%QUEUESIZE==front;
}

short count(){return counter;}

int cenqueue(TYPE value){ 
  // sucessful insert return 0,and unsucesfull returns 1;
  if(cisFull()){return 1;}
  if(isEmpty()){
    front=rear=0;
    queue[rear]=value;     
  }else{
  rear=(rear+1)%QUEUESIZE;
  queue[rear]=value;
  }
  counter++;
  return 0; 
}

inline TYPE cdequeue(){// return 1 if queue is empty.
  if(isEmpty()){return 1;}
  TYPE removingValue=queue[front];
  if(front==rear){
    front=rear=-1;
  }else{
    front=(front+1)%QUEUESIZE;
  }
  counter--;
  return removingValue;
}

void display(){// display can be modifed for different value{char,double etc}.
  int start=front;
  int end =rear;
  printf("Queue: ");
  for(;start<=rear;start++){
    printf("%d",queue[start]);
  }
  printf("\n");
}
