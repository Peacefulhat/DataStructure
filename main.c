#include"searchingAndSorting/searchSort.h"
int main(){

  int arr[5]={2,1,4,3,0};
  print(arr,5);
  printf("\nAfter sorting: ");
  insertionSort(arr,5);
  print(arr,5);
  return 0;
}
