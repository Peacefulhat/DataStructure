#include"searchSort.h"

pair linearSearch(TYPE *arr,int size,int valueToSearch){
// for both sroted and unsorted data set.
pair foundOrNot ={INT_MIN,INT_MIN};
// check for every value one by one
for( int i=0;i<size-1;i++){
// value found break; and return index and value
if(valueToSearch==arr[i]){
foundOrNot.index=i;
foundOrNot.value=arr[i];
break;
}
}
//value not found
if(foundOrNot.index==INT_MIN){
    foundOrNot.index=-1;
    foundOrNot.value=-1;
  }

return foundOrNot;
}


pair binarySearch(TYPE *arr, int size,int valueToSearch){
// only for sorted data set.
pair foundOrNot={INT_MIN,INT_MIN};
int start=0;
int end=size-1;
// if values end or start become like 2^31
  // we can not do mid=start+end/2 because it will go out of int range.
int mid = start+(end-start)/2;
while(start<=end){
    // value found
    if(arr[mid]==valueToSearch){
      foundOrNot.index=mid;
      foundOrNot.value=arr[mid];
      break;
    }
    //value is smaller movining left side of array.
  if(arr[mid]>valueToSearch){
      end=mid-1;
    }
    // value is larger moving to right side or array. 
    if(arr[mid]<valueToSearch){
      start=mid+1;
    }
  mid=start+(end-start)/2;
  }
  // if value is not found
  if(foundOrNot.index=INT_MIN){
    foundOrNot.index=-1;
    foundOrNot.value=-1;
  }
  return foundOrNot;
}
void bubbleSort(TYPE *arr, int size){
for(int i=0;i<size-1;i++){// rounds.
   bool swap=0;// to check if swaps are happning or not.
  for(int j=0;j<size-i-1;j++){ // comparisions
    if(arr[j]>arr[j+1]){
      int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
      swap=1;// swap happed.
    }
    if(swap==0){
      break;
    }
  }
}

void selectionSort(TYPE *arr, int size){

for(int i=0;i<size;i++){
    int min=arr[i];// assuming first element of unsorted section is min.
    int minIndex=i; // unsorted element index
  for(int j=i+1;j<size;j++){
    if(min>arr[j]){// finding min value
    min=arr[j];
    minIndex=j;
      }
     
    }//exchanging min value with other value
      arr[minIndex]=arr[i];
      arr[i]=min;
  }

}

void insertionSort(TYPE *arr, int size){
// only useful for small data set.
for(int i=1;i<size;i++){
    int val=arr[i];// unsroted section
    int j=i-1; // sorted section
    for(;j>=0&&val<arr[j];j--){// comapare from right to left.
    arr[j+1]=arr[j];// shift to right. 
     
    }
    arr[j+1]=val;
    }
  }



void print(TYPE *arr, int size){
  for(int i=0;i<size;i++){
  printf("%d ",arr[i]);
  }
}
