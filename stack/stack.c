#include "stack.h"
#define STACKSIZE 100
static TYPE sp=-1;
static TYPE stack[STACKSIZE];

void push (TYPE data){
  if(sp>STACKSIZE){return;}
  stack[++sp]=data;
}

int pop(){
  return stack[sp--];
}

bool isFull(){return sp==STACKSIZE-1;}

bool isEmpty(){return sp==-1;}

int peek(int i){
  return stack[i];
}

int change(int i,int value){
// return at which the data is changed.
stack[i]=value;
return i;
}

void display(){
  printf("Elements of stack: ");
  for(int i=sp;i>=0;i--){
    printf("%d ",pop());
  }
  printf("\n");
}
