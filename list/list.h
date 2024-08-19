#ifndef LIST_H
#define LIST_H
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define TYPE int
struct node{
  TYPE data;
  struct node*next;
};
void insertFront(TYPE);
void insertEnd(TYPE);
void insertAt(TYPE,int);
void deleteAt();
void deleteFront();
void deleteEnd();
void display();
bool search(TYPE);
void update(TYPE,int);
struct node* reverseRecursive(struct node*current,struct node*previous);
struct node*hadd();
void print(struct node*value);
int size();
#endif // !LIST_H
