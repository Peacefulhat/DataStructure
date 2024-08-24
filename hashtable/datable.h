// Direct access table. 
// array implementation of hashbale kind of
// only for integer value;
#ifndef DATABLE_H
#define DATABLE_H
#define MAX 10
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
int key;
int value;
}hashTableNode;
void insert(int key, int value);// for data insertion
hashTableNode search(int key);// for search of data
void del(int key);
void print();
#endif // !DATABLE_H
