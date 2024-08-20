#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define TYPE int
typedef struct {
  int index;
  int value;
} pair;


pair linearSearch(TYPE *arr,int size,int valueToSearch);
pair binarySearch(TYPE *arr, int size,int valueToSearch);
void bubbleSort(TYPE *arr, int size);
void selectionSort(TYPE *arr, int size);
void insertionSort(TYPE *arr, int size);




#endif // !LINEARSEARCH_H 
