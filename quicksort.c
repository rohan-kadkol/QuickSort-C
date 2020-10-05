void quicksort(int*, int, int);
int partition(int*, int, int);
void swap(int*, int, int);

void quicksort(int *nums, int start, int end) {
  if (end-start <= 0) {
    return;
  }

  int mid = partition(nums, start, end);

  quicksort(nums, start, mid - 1);
  quicksort(nums, mid + 1, end);
}

int partition(int *nums, int start, int end) {
  int i = start - 1;
  int pivot = nums[end];
  for (int j = start; j < end; j++) {
    if (nums[j] < pivot) {
      i++;
      swap(nums, i, j);
    }
  }

  swap(nums, i+1, end);
  return i+1;
}

void swap(int *nums, int left, int right) {
  int temp = nums[left];
  nums[left] = nums[right];
  nums[right] = temp;
}