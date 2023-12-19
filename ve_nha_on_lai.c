#include <stdio.h>
#include <conio.h>
int main () {
  int data[] = {0,11,13,14,15,17,18,19,2};
  int low = 0;
  int high = 8;
  int sreachvalue = 0;
  int flag = 0;

  while(low <= high) {
      int mid = (high + low)/2;
      if(sreachvalue == data[mid])
      {
          flag = 1;
          printf("element found at index: %d\n",mid);
          break;

      }else if (sreachvalue < data [mid]) {
          high = mid - 1;
      }else if (sreachvalue > data[mid]) {
          low = mid + 1;
      }
  }
  if (flag ==0) {
      printf("Element noy found at the array");
  }
}