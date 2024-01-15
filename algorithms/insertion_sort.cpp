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


void insertion_sort(int * arr, int size) {


  for(int idx = 1; idx <= size-1; ++idx) {
  
    
    int key = arr[idx];
    int jdx = idx-1;
    while(jdx>=0 && arr[jdx] > key) {
      arr[jdx+1] = arr[jdx];
      jdx--;
    }
    arr[jdx+1] = key;
  }

}

int main() {
  
  int arr[] = {4, 3, 2, 10, 1, 5, 12, 6};

  std::size_t arr_size = sizeof(arr)/sizeof(arr[0]);

  std::cout << "Array Before sorting : ";
  printArr(arr, arr_size);

  insertion_sort(arr, arr_size);
  
  std::cout << "Array After sorting  : ";
  printArr(arr, arr_size);
}
