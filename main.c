#include"searchingAndSorting/searchSort.h"
int main(){

  int arr[5]={1,2,4,6,9};
  pair result = binarySearch(arr,5,0);
  printf("%d %d",result.index,result.value);
  return 0;
}
