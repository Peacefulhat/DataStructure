#ifndef QUEUE_H
#define QUEUE_H
#include<stdio.h>
#include<stdbool.h>
#define TYPE int
int enqueue(TYPE);
int dequeue();
bool isEmpty();
bool isFull();
short count();
void display();
int updateFront();
int updateRear();
#endif 
