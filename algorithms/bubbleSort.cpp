// 9 8 7 5 6

#include <iostream>

void printArr(int * arr, int size) {
  
  std::cout << " {";
  for(int i=0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << "}" << std::endl;
}

void bubbleSort(int * arr, int size) {

  for(int i = 0; i < size - 1; ++i) {
    for(int j = 0; j < size - 1 - i; ++j) {
      if(arr[j]>arr[j+1]) {
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }

}

int main() {
  int arr[] = {9, 8, 7, 6, 5, 4};

  int size = sizeof(arr)/sizeof(arr[0]);
 
  std::cout << "Array Before sort : ";
  printArr(arr, size);

  bubbleSort(arr, size);

  std::cout << "Array After sort : ";
  printArr(arr, size);


}
