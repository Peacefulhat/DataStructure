#include"queue.h"
#define QUEUESIZE 100
static TYPE queue[QUEUESIZE];
static TYPE front=-1,rear=-1;
static TYPE counter=0;

inline bool isEmpty(){
  return front&&rear==-1;
}

static TYPE* queue(){return queue;}

int updateFront(){front++;return front;}

int updateRear(){rear++;return rear;}

inline bool isFull(){
  return rear==QUEUESIZE-1;
}

short count(){return counter;}

int enqueue(TYPE value){ 
  // sucessful insert return 0,and unsucesfull returns 1;
  if(isFull()){return 1;}
  if(isEmpty()){
    front=rear=0;
    queue[rear]=value;     
  }else{
    queue[++rear]=value;
  }
  counter++;
  return 0; 
}

inline TYPE dequeue(){// return 1 if queue is empty.
  if(isEmpty()){return 1;}
  TYPE removingValue=queue[front];
  if(front==rear){
    front=rear=-1;
  }else{
    front++;
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
