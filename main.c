#include"searchingAndSorting/searchSort.h"
int main(){

  int arr[6]={2,1,4,3,0,-1};
  print(arr,6);
  printf("\nAfter sorting: ");
  insertionSort(arr,6);
  print(arr,6);
  return 0;
}
