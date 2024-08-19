#ifndef STACK_H
#define STACK_H
#include<stdio.h>
#include<stdbool.h>
//#define STACKSIZE 100 // comment are not need here these only exclusive to stack.c file
#define TYPE int 
//extern TYPE stack[STACKSIZE];
//extern TYPE sp;
void push(TYPE);
int pop();
bool isFull();
bool isEmpty(); 
int peek(int);
int change(int,int);
void display();
#endif
