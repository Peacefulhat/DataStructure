#ifndef BST_H
#define BST_H
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define TYPE int
struct treeNode{
  TYPE data;
  struct treeNode*left;
  struct treeNode*right;
};
void insert(TYPE);
bool isTreeEmpty();
//depth first traversal.
void preOrder(struct treeNode*);
void inOrder(struct treeNode*);
void postOrder(struct treeNode*);
//breath firt traversal.
void levelOrder(struct treeNode*);
struct treeNode*search(TYPE);
struct treeNode*rsearch(TYPE,struct treeNode*);
struct treeNode*miniValueNode();
struct treeNode*delete(struct treeNode*,TYPE);
struct treeNode*raddress();
void givenLevel(struct treeNode*,int);
void print2d(struct treeNode*,int);
int height(struct treeNode*);
void printData(struct treeNode*);
#endif // !BST_H
