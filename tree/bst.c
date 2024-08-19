#include"bst.h"
#define SPACE 5
static struct treeNode*root=NULL;
static int lsize=0;

bool isTreeEmpty(){
  return root==NULL?1:0;
}


struct treeNode* raddress(){return root;}
void insert(TYPE value){
  struct treeNode*node=(struct treeNode*)malloc(sizeof(struct treeNode));
  node->data=value;
  node->left=NULL;
  node->right=NULL;
  if(root==NULL){
    root=node;
    lsize++;
  }else{
    lsize++;
    struct treeNode*temp=root;
    while(temp!=NULL){
      if(node->data<temp->data&&temp->left==NULL){
        temp->left=node;
        return;
      }
      if(node->data<temp->data){
        temp=temp->left;
      }
      if(node->data>temp->data&&temp->right==NULL){
        temp->right=node;
        return;
      }
      if(node->data>temp->data){
        temp=temp->right;
      }
    }
  }
}


//depth first traversal.
void preOrder(struct treeNode*ptr){
  if(ptr==NULL){
    return;
  } 
  printf("%d ",ptr->data);
  preOrder(ptr->left);
  preOrder(ptr->right);
}


void inOrder(struct treeNode*ptr){
  if(ptr==NULL){
    return;
  }
  inOrder(ptr->left);
  printf("%d ",ptr->data);
  inOrder(ptr->right); 
}


void postOrder(struct treeNode*ptr){
  if(ptr==NULL){
    return;
  }
  postOrder(ptr->left);
  postOrder(ptr->right);
  printf("%d ",ptr->data);
}


//breath firt traversal.
void levelOrder(struct treeNode*ptr){
  if(ptr==NULL){return;}
  int h=height(ptr);
  for(int i=0;i<=h;i++){
    givenLevel(ptr,i);
  }
}
void givenLevel(struct treeNode*ptr,int level){
  if(ptr==NULL){
    return;
  }
  if(level==0){
    printf("%d ",ptr->data);
  }else{
    givenLevel(ptr->left,level-1);
    givenLevel(ptr->right,level-1);
  }
}

void print2d(struct treeNode*ptr,int space){
  if(ptr==NULL){return;}
  space+=SPACE;
  print2d(ptr->right,space);
      for(int i=SPACE;i<space;i++){
    printf(" ");
  }
  printf("%d\n",ptr->data);
  print2d(ptr->left,space);
}


struct treeNode*search(TYPE value){
 struct treeNode* temp=root;
  if(temp==NULL){return temp;}
  while (temp!=NULL){
    if(value==temp->data){
      return temp;
    }
    if(value<temp->data){
      temp=temp->left;
    }else{
      temp=temp->right;
    }
   }
  return temp;
}


void printData(struct treeNode*ptr){
  if(ptr!=NULL){
  printf("{%d,%p}",ptr->data,ptr);
  }else{
    printf("NULL");
  }
}


struct treeNode*miniValueNode(struct treeNode*min){
  if(min==NULL){return NULL;}
  while(min->left!=NULL){
    min=min->left;
  }
 return min;
}


struct treeNode*rsearch(TYPE value,struct treeNode*ptr){
  if(ptr==NULL){ return NULL;}
  if(ptr->data==value){return ptr;}
  if(value<ptr->data){
    rsearch(value,ptr->left);
  }else{
    rsearch(value,ptr->right);
  }
}

int height(struct treeNode*ptr){
if(ptr==NULL){
    return -1;
  }else{
  int lheight=height(ptr->left);
  int rheight=height(ptr->right);
    if(lheight>rheight){
      return lheight+1;
    }else{
      return rheight+1;
    }
  }  
}

