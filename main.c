#include<stdio.h>
#include"quicksort.c"

void printArrayElements(int[], int);

int main() {
  int nums[] = {20, 1, 30, 234, 2348, 948, 2, 90, 131, 928, 2, 324, 3};
  int numsSize = sizeof(nums)/sizeof(nums[0]);
  printArrayElements(nums, numsSize);
  quicksort(nums, 0, numsSize-1);
  printArrayElements(nums, numsSize);
}

void printArrayElements(int nums[], int numSize) {
  for (int i=0; i<numSize; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
}