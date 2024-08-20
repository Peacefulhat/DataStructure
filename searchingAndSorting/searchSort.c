#include"searchSort.h"
pair linearSearch(TYPE *arr,int size,int valueToSearch){
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
if(foundOrNot.index=INT_MIN){
    foundOrNOt.index=-1;
    foundOrNot.value=-1;
  }

return foundOrNot;
}

pair binarySearch(TYPE *arr, int size,int valueToSearch){
pair foundOrNot={INT_MIN,INT_MIN};
int start=0;
int end=size-1;
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
void bubbleSort(TYPE *arr, int size);
void selectionSort(TYPE *arr, int size);
void insertionSort(TYPE *arr, int size);
