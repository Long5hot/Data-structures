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


void selection_sort(int * arr, int size) {

  for (int idx = 1; idx < size; idx++) {

    int minIdx = idx - 1;
    for (int jdx = minIdx+1 ; jdx<size; jdx++)
      if(arr[jdx]< arr[minIdx])
        minIdx  = jdx;
    int temp = arr[minIdx];
    arr[minIdx] = arr[idx-1];
    arr[idx-1]    = temp;
  }
}

int main() {
  
  int arr[] = {4, 3, 2, 10, 1, 5, 12, 6};

  std::size_t arr_size = sizeof(arr)/sizeof(arr[0]);

  std::cout << "Array Before sorting : ";
  printArr(arr, arr_size);

  selection_sort(arr, arr_size);
  
  std::cout << "Array After sorting  : ";
  printArr(arr, arr_size);
}
