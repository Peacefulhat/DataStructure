#include"datable.h"
static hashTableNode *hashTable[MAX]={NULL};
static hashTableNode error={-1,1};
static int size=0;
void insert(int key, int value){
if(key>=MAX-1){printf("out of keySpace");return;}
hashTable[key] = (hashTableNode*)malloc(sizeof(hashTableNode));
hashTable[key]->key=key;
hashTable[key]->value=value;
size++;
}

hashTableNode search(int key){
if(key>=MAX-1){printf("out of key space");return error; }
return *(hashTable[key]);
}

void print(){
for(int i=0;i<size;i++){
    printf("key:%d,value:%d",hashTable[i]->key,hashTable[i]->value);
  }
}

void del(int key){
if(key>=0&&hashTable[key]->key!=-1){
    hashTable[key]->key=-1;
    hashTable[key]->value=-1;
  }
}
