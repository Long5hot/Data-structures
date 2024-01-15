#include<iostream>

void printArr(int * arr, int size) {
  
  std::cout << " {";
  for(int i=0; i < size; ++i) {
    std::cout << arr[i];
    if(i<size-1)
      std::cout << ", ";
  }
  std::cout << "}" << std::endl;
}

void merge(int arr[], int left, int mid, int right) {

  int *merge_arr = new int[right-left+1];

  int idx = 0;
  ZZ
}

void merge_sort(int arr[], int left, int right) {

  if (left<=right) return;

  int mid = (right-left)/2;
  merge_sort(arr, left, mid);
  merge_sort(arr, mid+1,right);
  merge(arr, left, mid, right);
}

int main() {
  
  int arr[] = {4, 3, 2, 10, 1, 5, 12, 6};

  std::size_t arr_size = sizeof(arr)/sizeof(arr[0]);

  int left = 0, right = arr_size -1;

  std::cout << "Array Before sorting : ";
  printArr(arr, arr_size);

  merge_sort(arr, left, right); 

  std::cout << "Array After sorting  : ";
  printArr(arr, arr_size);
}
